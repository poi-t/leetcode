//假设把某股票的价格按照时间先后顺序存储在数组中，请问买卖该股票一次可能获得的最大利润是多少？

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
