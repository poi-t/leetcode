//����һ������ n������ 1 ... n Ϊ�ڵ���ɵĶ����������ж����֣�

class Solution {
public:
    int numTrees(int n) {
        int dp[n + 1];
        dp[0] = dp[1] = 1;
        int res = 0;
        for(int i = 2; i <= n; ++i)
        {
            res = 0;
            for(int j = 1; j <= i; ++j)
            {
                res += dp[i-j] * dp[j-1];
            }
            dp[i] = res;
        }
        return dp[n];
    }
};
