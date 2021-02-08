/*实现获取下一个排列的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。如果不存在
下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。必须原地修改，只允许使用额外常数空间。*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2, j = i + 1;
        while(i >= 0 && nums[i] >= nums[i+1])
        {
            --i;
        } 
        if(i >= 0)
        {
            while(nums[j] <= nums[i]) --j;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
 
