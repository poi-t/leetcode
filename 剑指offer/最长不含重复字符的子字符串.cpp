//请从字符串中找出一个最长的不包含重复字符的子字符串，计算该最长子字符串的长度。

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;//记录字母最后出现的位置 
        int ans = 0, left = 0, right = 0, n = s.length();
        while(right < n)
        {
            if(mp.find(s[right]) != mp.end())
            {
                left = max(mp[s[right]]+1, left);
            }
            mp[s[right]] = right;
            ++right;
            ans = max(ans, right-left);
        }
        return ans;
    }
};
