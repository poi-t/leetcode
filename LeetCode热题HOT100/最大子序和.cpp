//给定一个整数数组nums，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], n = nums.size(), tmin = 0, sum = 0;
        for(int i : nums)
        {
            sum += i;
            ans = max(ans, sum - tmin);
            tmin = min(tmin, sum);
        }
        return ans;
    }
};
