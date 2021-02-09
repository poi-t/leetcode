/*����һ������Ϊn����������nums������n > 1�������������output��
���� output[i]����nums�г�nums[i]?֮�������Ԫ�صĳ˻���*/

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

