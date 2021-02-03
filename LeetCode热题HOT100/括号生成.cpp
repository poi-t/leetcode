//数字n代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且有效的括号组合。

class Solution {
public:
    void solve(vector<string>& ans, string& now, int left, int right, int n)
    {
        if(left + right == 2 * n) 
        {
            ans.push_back(now);
            return;
        }
        if(left < n)
        {
            now.push_back('(');
            solve(ans, now, left+1, right, n);
            now.pop_back();
        }
        if(right < left)
        {
            now.push_back(')');
            solve(ans, now, left, right+1, n);
            now.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string now = "(";
    solve(ans, now, 1, 0, n);
    return ans;   
    }
};

