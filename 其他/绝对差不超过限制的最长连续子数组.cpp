/*����һ���������� nums ����һ����ʾ���Ƶ����� limit�����㷵�������������ĳ��ȣ�
���������е���������Ԫ��֮��ľ��Բ����С�ڻ��ߵ��� limit ��*/

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> qMax, qMin;
        int n = nums.size(), left = 0, right = 0, ans = 0;
        while(right < n)
        {
            while(! qMax.empty() && qMax.back() < nums[right])
            {
                qMax.pop_back();
            }
            while(! qMin.empty() && qMin.back() > nums[right])
            {
                qMin.pop_back();
            }
            qMax.push_back(nums[right]);
            qMin.push_back(nums[right]);
            while(!qMax.empty() && !qMin.empty() && qMax.front() - qMin.front() > limit)
            {
                if(qMax.front() == nums[left])
                {
                    qMax.pop_front();
                }
                if(qMin.front() == nums[left])
                {
                    qMin.pop_front();
                }
                ++left;
            }
            ++right;
            ans = max(ans, right - left);
        }
        return ans;
    }
};

