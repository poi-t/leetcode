/*����������ӵľ������ڼ��������Ľ��������������һ֧����÷���ߵ���ӡ���ӵĵ÷��������������Ա�ķ����ܺ͡�
Ȼ��������е�ì�ܻ�������Ա�ķ��ӣ����Ա���ѡ��һ֧û��ì�� ��ӡ����һ�������С��Ա�ķ����ϸ����һ������ϴ�
����Ա�������ì�ܡ�ͬ����Ա֮�䲻�ᷢ��ì�ܡ����������б� scores��ages������ÿ��scores[i]��ages[i]��ʾ��i��Ա��
���������䡣���㷵�����п��ܵ���ì������е÷������֧�ķ��� ��*/

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
