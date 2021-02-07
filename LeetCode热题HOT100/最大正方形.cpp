//��һ���� '0' �� '1' ��ɵĶ�ά�����ڣ��ҵ�ֻ���� '1' ����������Σ��������������

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(),  n = matrix[0].size(),  ans = 0;
        vector<vector<int>> dp(m, vector<int>(n));
        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if (matrix[i][j] == '1') 
                {
                    if (i == 0 || j == 0) 
                    {
                        dp[i][j] = 1;
                    } 
                    else 
                    {
                        int res = min(dp[i - 1][j], dp[i][j - 1]);
                        res = min(res, dp[i - 1][j - 1]);
                        dp[i][j] = res + 1;
                    }
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};
