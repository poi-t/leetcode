/*输入一个正整数 target ，输出所有和为 target 的连续正整数序列。
序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。*/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        int i = 1, j = 2;
        while(i < j)
        {
            int sum = (i + j)*(j - i +1)/2;
            if(sum == target)
            {
                vector<int> res;
                for(int x = i; x <= j; ++x) res.push_back(x);
                ans.push_back(res);
                ++i;
                ++j;
            }
            else if(sum > target) ++i;
            else ++j;
        }
        return ans;
    }
};
