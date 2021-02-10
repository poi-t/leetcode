/*给你一个整数数组 nums，有一个大小为k的滑动窗口从数组的最左侧移动到数组的最右侧。
你只可以看到在滑动窗口内的 k个数字。滑动窗口每次只向右移动一位。返回滑动窗口中的最大值。*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = nums.size(), i = 0;
        for(i = 0; i < k; ++i)
        {
            while(!dq.empty() && nums[i] >= nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for(; i < n; ++i)
        {
            while(!dq.empty() && nums[i] >= nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
            if(dq.front() <= i-k) dq.pop_front();
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
