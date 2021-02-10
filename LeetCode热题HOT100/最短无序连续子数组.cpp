/*����һ���������� nums ������Ҫ�ҳ�һ�� ���������� �����������������������������ô�������鶼���Ϊ��������
�����ҳ���������� ��� �����飬��������ĳ��ȡ�*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        int left = 0, right = n-1;
        while(left+1 < n && nums[left] <= nums[left+1]) ++left;
        if(left == n-1) return 0;
        while(right > 0 && nums[right] >= nums[right-1]) -- right;
        int tmin = nums[left+1], tmax = nums[right-1];
        for(int i = left; i <= right; ++i)
        {
            tmin = min(tmin, nums[i]);
            tmax = max(tmax, nums[i]);
        }
        while(left >= 0 && nums[left] > tmin) -- left;
        while(right < n && nums[right] < tmax) ++right;
        return right - left - 1;
    }
};
