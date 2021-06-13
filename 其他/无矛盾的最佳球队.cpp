/*假设你是球队的经理。对于即将到来的锦标赛，你想组合一支总体得分最高的球队。球队的得分是球队中所有球员的分数总和。
然而，球队中的矛盾会限制球员的发挥，所以必须选出一支没有矛盾 球队。如果一名年龄较小球员的分数严格大于一名年龄较大
的球员，则存在矛盾。同龄球员之间不会发生矛盾。给你两个列表 scores和ages，其中每组scores[i]和ages[i]表示第i球员的
分数和年龄。请你返回所有可能的无矛盾球队中得分最高那支的分数 。*/

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<int> res(n);
        for(int i = 0; i < n; ++i) {
            res[i] = i;
        }
        sort(res.begin(), res.end(), [&](int i, int j) {
            return (ages[i] < ages[j] || (ages[i] == ages[j] && scores[i] < scores[j]));
        });
        vector<int> dp(n, 0);
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            int idx = res[i];
            dp[i] = scores[idx];
            for(int j = 0; j < i; ++j) {
                if(scores[idx] >= scores[res[j]]) {
                    dp[i] = max(dp[i], scores[idx] + dp[j]);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
