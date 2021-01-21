//��n���������ڵ��ϣ��������ӳ���һ��ĵ���֮��Ϊs������n����ӡ��s�����п��ܵ�ֵ���ֵĸ��ʡ�

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
            for(int j = 6*i; j >= i; --j)//����i�����ӿ��ܳ��ֵĵ��� 
            {
                dp[j] = 0;
                for(int point = 1; point <= 6; ++point)
                {
                    if(j - point < i-1) break;//�������ܵ�����һ���ܹ��õ�����͵��� 
                    dp[j] += dp[j-point];
                }
            }
        }
        
        int mod = 1;
        for(int i = 0; i < n; ++i) mod *= 6;
        vector<double> ans;
        for(int i = n; i <= 6*n; ++i)//���տ��ܳ��ֵĵ���ֻ��n��6n 
        {
            ans.push_back(dp[i]*1.0/mod);
        }
        return ans;
    }
};
