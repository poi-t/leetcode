/*给你一个整数数组 nums ，找到其中最长严格递增子序列的长度。子序列是由数组派生而
来的序列，删除（或不删除）数组中的元素而不改变其余元素的顺序。*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        vector<int> dp(n, 1);
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(nums[i] > nums[j]) 
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            if(dp[i] > ans) ans = dp[i];
        }
        return ans;
    }
};

