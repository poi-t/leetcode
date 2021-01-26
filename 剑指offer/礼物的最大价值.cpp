/*��һ��m*n�����̵�ÿһ�񶼷���һ�����ÿ�����ﶼ��һ���ļ�ֵ����ֵ���� 0����
����Դ����̵����Ͻǿ�ʼ�ø�����������ÿ�����һ��������ƶ�һ��ֱ������
���̵����½ǡ�����һ�����̼������������ļ�ֵ���������������õ����ټ�ֵ�����*/
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m == 0) return 0;
        int n = grid[0].size();
        //����߽� 
        for(int i = 1; i < m; ++i) grid[i][0] += grid[i-1][0];
        for(int j = 1; j < n; ++j) grid[0][j] += grid[0][j-1];
        //dp
        for(int i = 1; i < m; ++i)
        {
            for(int j = 1; j<n; ++j)
            {
                grid[i][j] += max(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
    }
};

