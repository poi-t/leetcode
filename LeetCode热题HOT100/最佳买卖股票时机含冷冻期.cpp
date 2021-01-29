/*给定一个整数数组，其中第i个元素代表了第i天的股票价格。设计一个算法
计算出最大利润。在满足以下约束条件下，你可以尽可能地完成更多的交易；
你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。
卖出股票后，你无法在第二天买入股票 (即冷冻期为 1 天)。*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n < 2) return 0;
        //f0为手中无股票且不在冷冻期，f1为手中持有股票，f2为冷冻期（此时卖出） 
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

