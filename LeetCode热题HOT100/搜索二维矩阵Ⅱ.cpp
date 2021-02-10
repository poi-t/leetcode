/*编写一个高效的算法来搜索mxn矩阵 matrix中的一个目标值 target 。该矩阵具有以下特性：
每行的元素从左到右升序排列。
每列的元素从上到下升序排列。*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i = 0, j = n-1;
        while(i < m && j >= 0)
        {
            if(matrix[i][j] > target)
            {
                --j;
            }
            else if(matrix[i][j] < target)
            {
                ++i;
            }
            else 
            {
                return true;
            }
        }
        return false;
    }
};
