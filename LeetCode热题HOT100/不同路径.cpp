/*一个机器人位于一个 m x n?网格的左上角，机器人每次只能向下或者向右移动一步。
机器人试图达到网格的右下角问总共有多少条不同的路径？*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        long ans = 1;
        int t = m + n -2, f = min(m, n) - 1;
        for(int i = 1; i <= f; ++i, --t)
        {
            ans = ans * t / i;
        }
        return int(ans);
    }
};
