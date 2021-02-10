/*给定一个 n×n 的二维矩阵matrix 表示一个图像。请你将图像顺时针旋转 90度。
你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), res = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = i; j < n; ++j)
            {
                res = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = res;
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n/2; ++j)
            {
                res = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = res;
            }
        }
    }
};

