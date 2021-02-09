/*给你一个长度为n的整数数组nums，其中n > 1，返回输出数组output，
其中 output[i]等于nums中除nums[i]?之外其余各元素的乘积。*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ,res = nums[0];
        vector<int> ans(n,  1);
        for(int i = 1; i < n; ++i)
        {
            ans[i] = res;
            res *= nums[i];
        }
        res = nums[n-1];
        for(int i = n - 2; i >= 0; --i)
        {
            ans[i] *= res;
            res *= nums[i];
        }
        return ans;
    }
};

