/*给定两个字符串 s1 和 s2，写一个函数来判断 s2 是否包含 s1 的排列。
换句话说，第一个字符串的排列之一是第二个字符串的子串。*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> res1(26, 0), res2(26, 0);
        int n1 = s1.length(), n2 = s2.length(), word = 0;
        if(n1 > n2) return false;
        for(char s : s1)
        {
            if(! res1[s-'a']++) ++word;
        }

        int left = 0, right = n1, t = 0;
        for(int i = left; i < right; ++i)
        {
            t = s2[i] - 'a';
            if(res1[t] > 0 && ++res2[t] == res1[t])
            {
                --word;
            } 
        }
        if(word == 0) return true;
        while(right < n2)
        {
            t = s2[left] - 'a';
            if(res1[t] > 0 && res2[t]-- == res1[t])
            {
                ++word;
            }
            t = s2[right] - 'a';
            if(res1[t] > 0 && ++res2[t] == res1[t]) --word;
            if(word == 0) return true;
            ++left;
            ++right;
        }
        return false;
    }
};
