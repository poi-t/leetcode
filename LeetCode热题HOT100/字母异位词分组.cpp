//����һ���ַ������飬����ĸ��λ�������һ����ĸ��λ��ָ��ĸ��ͬ�������в�ͬ���ַ�����

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
