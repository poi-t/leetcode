/*给定一个数组 A[0,1,…,n-1]，请构建一个数组 B[0,1,…,n-1]，其中B[i]
的值是数组 A 中除了下标 i 以外的元素的积, 不能使用除法。*/

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int n = a.size();
        //分别计算i两边的数的乘积 
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

