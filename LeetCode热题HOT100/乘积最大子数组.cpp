/*给你一个整数数组 nums ，请你找出数组中乘积最大的连续子数组（该子数组中
至少包含一个数字），并返回该子数组所对应的乘积。*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(),res = 0, ans = nums[0];
        int maxp = nums[0], minp = nums[0];
        for (int i = 1; i < n; ++i) 
        {
            res = maxp;
            maxp = max(max(nums[i], minp * nums[i]), maxp * nums[i]);
            minp = min(min(nums[i], minp * nums[i]), res * nums[i]);
            ans = max(ans, maxp);
        }
        return ans;
    }
};
