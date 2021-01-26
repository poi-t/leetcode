/*请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。
路径可以从矩阵中的任意一格开始，每一步可以在矩阵中向左、右、上、下移动一格。
如果一条路径经过了矩阵的某一格，那么该路径不能再次进入该格子             */
class Solution {
public:
    int m = 0, n = 0;
    int turn[4][2] = {{1,0}, {-1, 0}, {0,1}, {0,-1}};
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int now)
    {
        if(i >= m || i < 0 || j >= n || j < 0 || board[i][j] != word[now]) return false;
        if(now == word.length() - 1) return true;
        board[i][j] = '\0';//标记为访问过 
        for(int t = 0; t < 4; ++t)
        {
            if(dfs(board, word, i + turn[t][0], j + turn[t][1], now + 1)) 
            {
                return true;
            }
        }
        board[i][j] = word[now];//回溯 
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        if(m == 0) return false;
        n = board[0].size();
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};


