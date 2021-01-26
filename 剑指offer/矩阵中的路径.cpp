/*�����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����
·�����ԴӾ����е�����һ��ʼ��ÿһ�������ھ����������ҡ��ϡ����ƶ�һ��
���һ��·�������˾����ĳһ����ô��·�������ٴν���ø���             */
class Solution {
public:
    int m = 0, n = 0;
    int turn[4][2] = {{1,0}, {-1, 0}, {0,1}, {0,-1}};
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int now)
    {
        if(i >= m || i < 0 || j >= n || j < 0 || board[i][j] != word[now]) return false;
        if(now == word.length() - 1) return true;
        board[i][j] = '\0';//���Ϊ���ʹ� 
        for(int t = 0; t < 4; ++t)
        {
            if(dfs(board, word, i + turn[t][0], j + turn[t][1], now + 1)) 
            {
                return true;
            }
        }
        board[i][j] = word[now];//���� 
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


