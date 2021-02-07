/*给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数 大于 n/2的元素。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int time = 0, ans = nums[0];
        for(int i : nums)
        {
            if(i == ans) ++time;
            else --time;
            if(time == 0)
            {
                ans = i;
                time = 1;
            }
        }
        return ans;
    }
}; 
