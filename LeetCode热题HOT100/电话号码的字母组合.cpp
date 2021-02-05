/*给定一个仅包含数字?2-9?的字符串，返回所有它能表示的字母组合。答案可以按任意顺序返回。
给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母*/

class Solution {
public:
    vector<string> ans;
    vector<vector<char> > word = {{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    void dfs(string res, string& digits, int n)
    {
        if(n == digits.size())
        {
            ans.push_back(res);
            return;
        }
        int i = digits[n] - '2';
        for(int j = 0; j < word[i].size(); ++j)
        {
            string s = res + word[i][j];
            dfs(s, digits, n+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return ans;
        string res;
        dfs(res, digits, 0);
        return ans;
    }
};

