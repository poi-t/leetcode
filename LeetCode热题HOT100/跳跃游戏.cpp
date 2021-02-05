/*给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。数组中的每个元素
代表你在该位置可以跳跃的最大长度。判断你是否能够到达最后一个下标。*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return true;
        int i = 0, key = 0;
        while(i < n)
        {
            if(i + nums[i] >= n-1) return true;
		    if(nums[i] == 0)return false;
		    key = i + 1;
		    int maxx = nums[key];
		    for(int j = key; j <= i + nums[i]; ++j)
		    {
                if(j + nums[j] > key + maxx)
                {
                    key = j;
                    maxx = nums[key];
                }
		    }
		    i = key;
        }
        return true;
    }
};
