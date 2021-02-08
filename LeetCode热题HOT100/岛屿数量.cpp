/*����һ����?'1'��½�أ��� '0'��ˮ����ɵĵĶ�ά����������������е�����������������Ǳ�ˮ
��Χ������ÿ������ֻ����ˮƽ�����/����ֱ���������ڵ�½�������γɡ�������������߾���ˮ��Χ��*/

class Solution {
public:
    int turn[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int m = 0, n = 0;
    void dfs(vector<vector<char>>& grid, int x, int y)
    {
        if(x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != '1') return;
        grid[x][y] = -1;
        for(auto i : turn)
        {
            dfs(grid, x + i[0], y + i[1]);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(grid[i][j] == '1')
                {
                    ++ans;
                    dfs(grid, i, j);
                }
            }
        }
        return ans;
    }
};
