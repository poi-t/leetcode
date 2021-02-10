/*�������е���������nums��Ԥ��δ֪��ĳ�����Ͻ�������ת�����磬[0,1,2,4,5,6,7]����ת����ܱ�Ϊ[4,5,6,7,0,1,2]����
����������������target����������д������Ŀ��ֵ���򷵻��������������򷵻�-1��*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1) return nums[0] == target ? 0 : -1;
        int i = 0, j = n-1, mid = 0;
        while(i <= j)
        {
            mid = (j + i) /2;
            if(nums[mid] == target) return mid;
            if(nums[0] <= nums[mid])
            {
                if(target <= nums[mid] && target >= nums[0]) j = mid - 1;
                else i = mid + 1;
            }
            else
            {
                if(nums[mid] <= target && nums[n-1] >= target) i = mid + 1;
                else j = mid - 1;
            }
        }
        return -1;
    }
};
