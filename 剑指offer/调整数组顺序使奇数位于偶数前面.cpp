/*����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ��
��������λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�*/
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int first = 0, end = nums.size() - 1;
        while(first < end)
        {
            while(first < end && nums[first] % 2 == 1) ++first;
            while(first < end && nums[end] % 2 == 0) --end;
            if(first == end ) break;
            int temp = nums[first];
            nums[first] = nums[end];
            nums[end] = temp;
            ++first;
            --end;
        }
        return nums;
    }
};
