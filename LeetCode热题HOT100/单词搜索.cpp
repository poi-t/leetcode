/*����һ����ά�����һ�����ʣ��ҳ��õ����Ƿ�����������С����ʱ��밴����ĸ˳��
ͨ�����ڵĵ�Ԫ���ڵ���ĸ���ɣ����С����ڡ���Ԫ������Щˮƽ���ڻ�ֱ���ڵĵ�Ԫ��
ͬһ����Ԫ���ڵ���ĸ�������ظ�ʹ�á�*/

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

