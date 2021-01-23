//统计一个数字在排序数组中出现的次数。

class Solution {
public:
    int ans = 0;
    void f(vector<int>& nums, int target, int left, int right)
    {
        if(left <= right)
        {
            int m = left + (right - left) /2;
            if(nums[m] == target)
            {
                ans++;
                f(nums, target, left, m-1);
                f(nums, target, m+1, right);
            }
            else if(nums[m] > target)
            {
                f(nums, target, left, m-1);
            }
            else f(nums, target, m+1, right);
        }
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return 0;
        f(nums, target, 0, n-1);
        return ans;
    }
};
