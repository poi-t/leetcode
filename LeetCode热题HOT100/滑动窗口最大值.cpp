/*����һ���������� nums����һ����СΪk�Ļ������ڴ������������ƶ�����������Ҳࡣ
��ֻ���Կ����ڻ��������ڵ� k�����֡���������ÿ��ֻ�����ƶ�һλ�����ػ��������е����ֵ��*/

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
