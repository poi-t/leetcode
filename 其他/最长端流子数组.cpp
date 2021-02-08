/*当 A的子数组A[i],A[i+1], ..., A[j]满足下列条件时，我们称其为湍流子数组：
如果比较符号在子数组中的每个相邻元素对之间翻转，则该子数组是湍流子数组。返回 A 的最大湍流子数组的长度。*/

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
