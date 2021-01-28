/*一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个
 n 级的台阶总共有多少种跳法。答案需要取模 1e9+7（1000000007）*/
 class Solution {
public:
    int mod = (1e9 + 7);
    int numWays(int n) {
        if(n < 2) return 1;
        vector<int> dp(n+1, 0);
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; ++i)
        {
            dp[i] = (dp[i-1] + dp[i-2]) % mod;
        }
        return dp[n];
    }
};
