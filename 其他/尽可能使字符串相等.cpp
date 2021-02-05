/*给你两个长度相同的字符串，s和t。将s中的第i个字符变到t中的第i个字符需要|s[i]-t[i]|的
开销（开销可能为 0），也就是两个字符的ASCII码值的差的绝对值。用于变更字符串的最大预算
是maxCost。在转化字符串时，总开销应当小于等于该预算，这也意味着字符串的转化可能是不完全的。
如果你可以将 s 的子字符串转化为它在 t 中对应的子字符串，则返回可以转化的最大长度。*/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, n = s.size(), ans = 0;
        for (int i = 0; i < n; ++i)
        {
            maxCost -= abs(s[i] - t[i]);
            while(maxCost < 0)
            {
                maxCost += abs(s[left] - t[left]);
                ++left;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};
