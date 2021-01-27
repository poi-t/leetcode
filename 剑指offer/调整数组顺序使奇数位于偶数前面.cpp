/*输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得
所有奇数位于数组的前半部分，所有偶数位于数组的后半部分。*/
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int first = 0, end = nums.size() - 1;
        while(first < end)
        {
            while(first < end && nums[first] % 2 == 1) ++first;
            while(first < end && nums[end] % 2 == 0) --end;
            if(first == end ) break;
            int temp = nums[first];
            nums[first] = nums[end];
            nums[end] = temp;
            ++first;
            --end;
        }
        return nums;
    }
};
