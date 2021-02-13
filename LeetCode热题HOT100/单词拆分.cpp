/*����һ���ǿ��ַ��� s ��һ�������ǿյ��ʵ��б� wordDict���ж� s �Ƿ���Ա��ո���Ϊһ���������ֵ��г��ֵĵ��ʡ�
˵����
���ʱ�����ظ�ʹ���ֵ��еĵ��ʡ�
����Լ����ֵ���û���ظ��ĵ��ʡ�*/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> us;
        int leng = 0;
        for(string i : wordDict)
        {
            us.insert(i);;
            leng = max(leng, int(i.length()));
        } 
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = max(0, i - leng); j < i; ++j)
            {
                if(dp[j] && us.find(s.substr(j, i-j)) != us.end())
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};

