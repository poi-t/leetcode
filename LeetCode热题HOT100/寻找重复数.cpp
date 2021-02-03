/*给定一个包含?n + 1 个整数的数组?nums ，其数字都在 1 到 n?之间（包括 1 和 n），
可知至少存在一个重复的整数。假设 nums 只有 一个重复的整数 ，找出 这个重复的数 。*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), left = 1, right = n - 1, ans = -1, mid = 0, cnt = 0;
        while (left <= right) 
		{
            mid = (left + right) >> 1;
            cnt = 0;
            for(int i = 0; i < n; ++i) 
            {
                if(nums[i] <= mid) ++cnt;
            }
            if (cnt <= mid) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};

