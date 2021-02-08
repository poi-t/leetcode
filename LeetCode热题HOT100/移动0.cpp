//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size(), num = 0;
        while(i < n)
        {
            num = nums[i++];
            if(num != 0)
            {
                nums[j++] = num;
            }
        }
        while(j < n)
        {
            nums[j++] = 0;
        }
    }
};
