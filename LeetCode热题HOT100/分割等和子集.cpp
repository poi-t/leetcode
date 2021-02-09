//给定一个只包含正整数的非空数组。是否可以将这个数组分割成两个子集，使得两个子集的元素和相等。

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if(nums.size() < 2) return false;
        int num = 0, n = nums.size(), tmax = nums[0], res = 0;
        for(int i: nums)
        {
            num += i;
            tmax = max(tmax, i);
        }
        if((num % 2 == 1) || (tmax > num / 2) ) return false;
        num /= 2;
        vector<vector<bool>> dp(n, vector<bool>(num + 1, false));
        for(int i = 0; i < n; ++i)
        {
            dp[i][0] = true;
        }
        dp[0][nums[0]] = true;
        for(int i = 1; i < n; ++i)
        {
            res = nums[i];
            for(int j = 0; j <= num; ++j)
            {
                dp[i][j] = dp[i-1][j];
                if(j >= res) dp[i][j] = dp[i][j] | dp[i - 1][j - res];
            }
        }
        return dp[n - 1][num];
    }
};
