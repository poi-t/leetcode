//把n个骰子扔在地上，所有骰子朝上一面的点数之和为s。输入n，打印出s的所有可能的值出现的概率。

class Solution {
public:
    vector<double> dicesProbability(int n) {
        vector<int> dp(6*n+1, 0);
        for(int i = 0; i <= 6; ++i)
        {
            dp[i] = 1;
        }

        for(int i = 2; i <= n; ++i)
        {
            for(int j = 6*i; j >= i; --j)//计算i个骰子可能出现的点数 
            {
                dp[j] = 0;
                for(int point = 1; point <= 6; ++point)
                {
                    if(j - point < i-1) break;//点数不能低于上一轮能够得到的最低点数 
                    dp[j] += dp[j-point];
                }
            }
        }
        
        int mod = 1;
        for(int i = 0; i < n; ++i) mod *= 6;
        vector<double> ans;
        for(int i = n; i <= 6*n; ++i)//最终可能出现的点数只有n到6n 
        {
            ans.push_back(dp[i]*1.0/mod);
        }
        return ans;
    }
};
