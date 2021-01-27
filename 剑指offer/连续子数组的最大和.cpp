//输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int ans = nums[0];
        int sum = 0, minn = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += nums[i];
            ans = max(ans, sum-minn);
            minn = min(sum, minn);
        }
        return ans;
    }
};
