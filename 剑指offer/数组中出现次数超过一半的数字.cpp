//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], times = 0;
        for(int i : nums)//摩尔投票法 
        {
            if(i == ans) ++times;
            else if(times == 0) 
            {
                ans = i;
                times = 1;
            }
            else --times;
        }
        return ans;
    }
};
