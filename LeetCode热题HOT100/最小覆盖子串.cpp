/*给你一个字符串 s 、一个字符串 t 。返回 s 中涵盖 t 所有字符的最小子串。
如果 s 中不存在涵盖 t 所有字符的子串，则返回空字符串 "" 。*/

class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, right = 0, n = s.length(), maxl = n + 1 , num = 0, fine = 0, begin = -1;
        vector<int> words(128, 0), wordt(128, 0);
        for(char x : t)
        {
            if(!wordt[x]) ++num;
            wordt[x] += 1;
        }
        while(right < n)
        {
            words[s[right]] += 1;
            if(wordt[s[right]] && (wordt[s[right]] == words[s[right]]) )
            {
                ++fine;
            }
            ++right;
            if(fine < num) continue;
            while(!wordt[s[left]] || (words[s[left]] > wordt[s[left]]) )
            {
                words[s[left++]] -= 1;
            }
            if(right - left < maxl)
            {
                maxl = right - left;
                begin = left;
            }
        }
        if(maxl == n + 1) return "";
        else return s.substr(begin, maxl);
    }
};
