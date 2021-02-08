/*ʵ�ֻ�ȡ��һ�����еĺ������㷨��Ҫ���������������������г��ֵ�������һ����������С����������
��һ����������У��������������г���С�����У����������У�������ԭ���޸ģ�ֻ����ʹ�ö��ⳣ���ռ䡣*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2, j = i + 1;
        while(i >= 0 && nums[i] >= nums[i+1])
        {
            --i;
        } 
        if(i >= 0)
        {
            while(nums[j] <= nums[i]) --j;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
 
