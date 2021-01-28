/*һֻ����һ�ο�������1��̨�ף�Ҳ��������2��̨�ס������������һ��
 n ����̨���ܹ��ж���������������Ҫȡģ 1e9+7��1000000007��*/
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
