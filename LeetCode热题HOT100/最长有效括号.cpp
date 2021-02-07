//给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。
class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0, left = 0, right = 0, n = s.length();
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '(') ++left;
            else ++right;
            if(left == right)
            {
                ans = max(ans, 2 * right);
            }
            else if(right > left)
            {
                left = right = 0;
            }
        }
        left = right = 0;
        for(int i = n - 1; i >= 0; --i)
        {
            if(s[i] == '(') ++left;
            else ++right;
            if(left == right)
            {
                ans = max(ans, 2 * left);
            }
            else if(right < left)
            {
                left = right = 0;
            }
        }
        return ans;
    }
};
