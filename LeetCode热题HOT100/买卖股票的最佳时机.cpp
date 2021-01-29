/*给定一个数组 prices，它的第i个元素prices[i]表示一支给定股票第i天的价格。
你只能选择 某一天 买入这只股票，并选择在未来的某一个不同的日子卖出该股票，
设计一个算法来计算你所能获取的最大利润。*/

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
