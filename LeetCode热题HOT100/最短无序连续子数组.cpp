/*给你一个整数数组 nums ，你需要找出一个 连续子数组 ，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。
请你找出符合题意的 最短 子数组，并输出它的长度。*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        int left = 0, right = n-1;
        while(left+1 < n && nums[left] <= nums[left+1]) ++left;
        if(left == n-1) return 0;
        while(right > 0 && nums[right] >= nums[right-1]) -- right;
        int tmin = nums[left+1], tmax = nums[right-1];
        for(int i = left; i <= right; ++i)
        {
            tmin = min(tmin, nums[i]);
            tmax = max(tmax, nums[i]);
        }
        while(left >= 0 && nums[left] > tmin) -- left;
        while(right < n && nums[right] < tmax) ++right;
        return right - left - 1;
    }
};
