/*给你一个用字符数组?tasks 表示的 CPU 需要执行的任务列表。其中每个字母表示一种不同种类的任务。
任务可以以任意顺序执行，并且每个任务都可以在 1 个单位时间内执行完。在任何一个单位时间，CPU
可以完成一个任务，或者处于待命状态。两个相同种类的任务之间必须有长度为整数 n 的冷却时间，因此
至少有连续 n 个单位时间内 CPU 在执行不同的任务，或者在待命状态。你需要计算完成所有任务所需要的最短时间 */

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int length = tasks.size();
        if(n == 0) return length;
        vector<int> val(26, 0);
        for(char s : tasks)
        {
            val[s-'A'] += 1;
        }
        int maxp = 0, t = 0;
        for(int i : val)
        {
            if(i > maxp)
            {
                maxp = i;
                t = 1;
            }
            else if(i == maxp) 
            {
                ++t;
            }
        }
        return max(length, (maxp - 1) * (n + 1) + t);
    }
};
