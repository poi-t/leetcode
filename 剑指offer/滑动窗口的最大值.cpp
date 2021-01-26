//给定一个数组 nums 和滑动窗口的大小 k，请找出所有滑动窗口里的最大值。

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;    
        deque<int> temp;
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            while(!temp.empty() && nums[i] > nums[temp.back()])
            {   
                temp.pop_back();
            }
            if(!temp.empty() && temp.front() < i-k+1) temp.pop_front();
            temp.push_back(i);
            if(i >= k-1) ans.push_back(nums[temp.front()]);
        }
        return ans;
    }
};
