/*�����ÿ�������б���������һ���б���Ӧλ�õ����Ϊ��Ҫ��۲⵽����
�����£�������Ҫ�ȴ��������������������֮�󶼲������ߣ����ڸ�λ����0�����档*/
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

