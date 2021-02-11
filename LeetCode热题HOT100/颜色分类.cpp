/*给定一个包含红色、白色和蓝色，一共?n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，
并按照红色、白色、蓝色顺序排列。使用整数 0、?1 和 2 分别表示红色、白色和蓝色。*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), p = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (nums[i] == 0) 
            {
                nums[i] = nums[p];
                nums[p++] = 0;
            }
        }
        for (int i = p; i < n; ++i) 
        {
            if (nums[i] == 1) 
            {
                nums[i] = nums[p];
                nums[p++] = 1;
            }
        }
    }
};
