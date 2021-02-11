/*给定一个非负整数数组，和一个目标数，S。现在你有两个符号+和-。对于数组中的任意一个整数，
你都可以从+或-中选择一个符号添加在前面。返回可以使最终数组和为目标数 S 的所有添加符号的方法数。*/
/*
  题意相当于寻找两个子数组sum[A], sum[B],使得sum[A]-sum{B] = S, 
  即为 sum[A]-sum{B]+sum[A]+sum{B] = S + sum,
  即为 sum[A] = (S+sum)/2,既计算等于（S+sum）/2的子数组数量，这隐含（S+sum）为偶数，且sum>=S;
 */ 
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int n = nums.size(), sum = 0, res = 0;
        for(int i : nums)
        {
            sum += i;
        }
        if(S > sum || (S + sum) % 2 == 1) return 0;
        sum = (S + sum) / 2;
        vector<int> dp(sum+1, 0);
        dp[0] = 1;
        for(int i = 0; i < n; ++i)
        {
            res = nums[i];
            for(int j = sum; j >= res; --j)
            {
                dp[j] += dp[j - res];
            }
        }
        return dp[sum];
    }
};
