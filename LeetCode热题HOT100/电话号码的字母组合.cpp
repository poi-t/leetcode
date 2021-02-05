/*����һ������������?2-9?���ַ����������������ܱ�ʾ����ĸ��ϡ��𰸿��԰�����˳�򷵻ء�
�������ֵ���ĸ��ӳ�����£���绰������ͬ����ע�� 1 ����Ӧ�κ���ĸ*/

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

