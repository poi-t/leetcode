/*给定一个字符串，你的任务是计算这个字符串中有多少个回文子串。具有不同
开始位置或结束位置的子串，即使是由相同的字符组成，也会被视作不同的子串。*/

class Solution {
public:
    int countSubstrings(string s) {
        int num = 0,  n = s.size(), l = 0, r = 0; 
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j <= 1; ++j)
            {
                l = i;
                r = i + j;
                while(l >= 0 && r < n && s[l--] == s[r++])
                {
                    ++num;
                }
            }
        }
        return num;
    }
}; 
