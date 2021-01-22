/*��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ����Ч�ĺ���������
������һ����ά�����һ���������ж��������Ƿ��и�������*/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0)return false;
        int m = matrix[0].size();
        int i = 0, j = m - 1, num = 0;
        while(i< n && j >= 0)//�����е��������������Ϸ�����
        {
            num = matrix[i][j];
            if(num == target) return true;
            else if(num > target) --j;
            else ++i;
        }
        return false;
    }
};
