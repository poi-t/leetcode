/*在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，输入
这样的一个二维数组和一个整数，判断数组中是否含有该整数。*/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0)return false;
        int m = matrix[0].size();
        int i = 0, j = m - 1, num = 0;
        while(i< n && j >= 0)//矩阵中的数都大于其左上方的数
        {
            num = matrix[i][j];
            if(num == target) return true;
            else if(num > target) --j;
            else ++i;
        }
        return false;
    }
};
