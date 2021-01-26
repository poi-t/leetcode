//在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。

class Solution {
public:
    char firstUniqChar(string s) {
        int n = s.length();
        vector<int> letter(26, 0);
        for(char word : s)
        {
            letter[word - 'a'] += 1;
        }
        for(char word : s)
        {
            if(letter[word - 'a'] == 1) return word;
        }
        return ' ';
    }
};
