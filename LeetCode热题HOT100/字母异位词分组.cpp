//给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        string res;
        for(string i: strs)
        {
            res = i;
            sort(res.begin(), res.end());
            mp[res].emplace_back(i);
        }
        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); ++it)
        {
            ans.emplace_back(it->second);
        }
        return ans;
    }
};
