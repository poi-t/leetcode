//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if(m == 0) return ans;
        int n = matrix[0].size();
        int left = 0, right = n-1, top = 0, end = m-1;
        while(left <= right && top <= end)
        {
            for(int i = left; i <= right; ++i) ans.push_back(matrix[top][i]);
            for(int i = top+1; i <= end; ++i) ans.push_back(matrix[i][right]);
            if(left < right && top < end) 
            {
                for(int i = right-1; i > left; --i) ans.push_back(matrix[end][i]);
                for(int i = end; i > top; --i) ans.push_back(matrix[i][left]);
            }
            ++left;
            --right;
            ++top;
            --end;
        }
        return ans;
    }
};
