/*����һ������ prices�����ĵ�i��Ԫ��prices[i]��ʾһ֧������Ʊ��i��ļ۸�
��ֻ��ѡ�� ĳһ�� ������ֻ��Ʊ����ѡ����δ����ĳһ����ͬ�����������ù�Ʊ��
���һ���㷨�����������ܻ�ȡ���������*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        if(prices.size() < 2) return ans;
        int minn = prices[0];
        for(int i : prices)
        {
            minn = min(minn, i);
            ans = max(ans, i - minn);
        }
        return ans;
    }
};
