//给你一个字符串 s，找到 s 中最长的回文子串。
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n, true));
        int leng = 0, begin = 0;
        for(int i = 1; i < n; ++i)
        {
            for(int j = 0; i + j < n; ++j)
            {
                if(i == 1)
                {
                    dp[j][i+j] = (s[j] == s[i+j]);
                }
                else
                {
                    dp[j][i + j] = (s[j] == s[i + j]) && dp[j + 1][i + j - 1];
                }
                if(i > leng && dp[j][i + j])
                {
                    leng = i;
                    begin = j;
                }
            }
        }
        return s.substr(begin, leng + 1);
    }
};
