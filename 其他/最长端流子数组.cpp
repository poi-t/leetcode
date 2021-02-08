/*�� A��������A[i],A[i+1], ..., A[j]������������ʱ�����ǳ���Ϊ���������飺
����ȽϷ������������е�ÿ������Ԫ�ض�֮�䷭ת����������������������顣���� A ���������������ĳ��ȡ�*/

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size(), r1 = 1, r2 = 1, ans = 1;
        for(int i = 1; i < n; ++i)
        {
            if(arr[i] > arr[i-1])
            {
                r2 = r1 + 1;
                r1 = 1;
            }
            else if(arr[i] < arr[i-1])
            {
                r1 = r2 + 1;
                r2 = 1;
            }
            else
            {
                r1 = r2 = 1;
            }
            ans = max(ans, max(r1, r2));
        }
        return ans;
    }
};
