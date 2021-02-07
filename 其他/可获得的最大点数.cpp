/*几张卡牌 排成一行，每张卡牌都有一个对应的点数。点数由整数数组cardPoints给出。每次行动，
你可以从行的开头或者末尾拿一张卡牌，最终你必须正好拿k张卡牌。你的点数就是你拿到手中的所有
卡牌的点数之和。给你一个整数数组 cardPoints 和整数 k，请你返回可以获得的最大点数。*/
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), num = 0, left = k - 1;
        for(int i = 0; i < k; ++i)
        {
            num += cardPoints[i];
        }
        int ans = num;
        for(int i = 0; i < k; ++i)
        {
            num += (cardPoints[n - i - 1] - cardPoints[left--]);
            ans = max(ans, num);
        }
        return ans;
    }
};
