/*一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，
但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字*/

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            while(nums[i] != i)
            {
                if(nums[nums[i]] == nums[i]) return nums[i];
                else swap(nums[i], nums[nums[i]]);
            }
        }
        return 0;
    }
};

