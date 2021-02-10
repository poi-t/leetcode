/*����һ�� n��n �Ķ�ά����matrix ��ʾһ��ͼ�����㽫ͼ��˳ʱ����ת 90�ȡ�
�������ԭ����תͼ������ζ������Ҫֱ���޸�����Ķ�ά�����벻Ҫʹ����һ����������תͼ��*/

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

