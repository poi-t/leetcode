//�����ĳ��Ʊ�ļ۸���ʱ���Ⱥ�˳��洢�������У����������ù�Ʊһ�ο��ܻ�õ���������Ƕ��٣�

 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int minp = prices[0], ans = 0;
        for(int i : prices)
        {
            minp = min(i, minp);
            ans = max(ans, i - minp);
        }
        return ans;
    }
};
