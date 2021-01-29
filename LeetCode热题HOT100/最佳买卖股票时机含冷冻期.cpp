/*����һ���������飬���е�i��Ԫ�ش����˵�i��Ĺ�Ʊ�۸����һ���㷨
����������������������Լ�������£�����Ծ����ܵ���ɸ���Ľ��ף�
�㲻��ͬʱ�����ʽ��ף���������ٴι���ǰ���۵�֮ǰ�Ĺ�Ʊ����
������Ʊ�����޷��ڵڶ��������Ʊ (���䶳��Ϊ 1 ��)��*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n < 2) return 0;
        //f0Ϊ�����޹�Ʊ�Ҳ����䶳�ڣ�f1Ϊ���г��й�Ʊ��f2Ϊ�䶳�ڣ���ʱ������ 
        int f0 = 0, f1 = -prices[0], f2 = 0;
        int r0, r1, r2;
        for(int i = 1; i < n; ++i)
        {
            r0 = max(f0, f2);
            r1 = max(f0 - prices[i], f1);
            r2 = f1 + prices[i];
            f0 = r0;
            f1 = r1;
            f2 = r2;
        }
        return max(f0, f2);
    }
};

