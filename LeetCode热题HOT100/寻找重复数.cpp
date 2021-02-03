/*����һ������?n + 1 ������������?nums �������ֶ��� 1 �� n?֮�䣨���� 1 �� n����
��֪���ٴ���һ���ظ������������� nums ֻ�� һ���ظ������� ���ҳ� ����ظ����� ��*/
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

