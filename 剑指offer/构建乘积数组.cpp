/*����һ������ A[0,1,��,n-1]���빹��һ������ B[0,1,��,n-1]������B[i]
��ֵ������ A �г����±� i �����Ԫ�صĻ�, ����ʹ�ó�����*/

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int n = a.size();
        //�ֱ����i���ߵ����ĳ˻� 
        vector<int> left(n);
        vector<int> right(n);
        int t1 = 1, t2 = 1;
        for(int i = 0; i < n; ++i)
        {
            left[i] = t1;
            t1 *= a[i];
            right[n-i-1] = t2;
            t2 *= a[n-i-1];
        }
        vector<int> ans(n, 1);
        for(int i = 0; i < n; ++i)
        {
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};

