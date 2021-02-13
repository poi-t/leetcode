/*给定一个二维网格和一个单词，找出该单词是否存在于网格中。单词必须按照字母顺序，
通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。
同一个单元格内的字母不允许被重复使用。*/

class Solution {
public:
    int m = 0, n = 0;
    int turn[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool find(vector<vector<char>>& board, string word, int x, int y)
    {
        if(word.length() == 0) return true;
        if(x < 0 || x >= m || y < 0 || y >= n || board[x][y] != word[0]) return false;
        char res = board[x][y];
        board[x][y] = '/';
        for(int i = 0; i < 4; ++i)
        {
            if(find(board, word.substr(1), x + turn[i][0], y + turn[i][1]))
            {
                return true;
            }
        }
        board[x][y] = res;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(), n = board[0].size();
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(board[i][j] == word[0] && find(board, word, i, j))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

