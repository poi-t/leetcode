/*请根据每日气温列表，重新生成一个列表。对应位置的输出为：要想观测到更高
的气温，至少需要等待的天数。如果气温在这之后都不会升高，请在该位置用0来代替。*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> ans(n, 0);
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && T[i] > T[s.top()]) 
            {
                int t = s.top();
                ans[t] = i - t;
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};

