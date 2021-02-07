//给你一个长度为 n 的整数数组，请你判断在最多改变1 元素的情况下，该数组能否变成一个非递减数列。
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool ans = true;
        int n = nums.size();
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] < nums[i-1])
            {
                if(!ans) return ans;
                ans = !ans; 
                if(i > 1 && nums[i] < nums[i-2])
                {
                    nums[i] = nums[i-1];
                }
            }
        }
        return true;
    }
};
