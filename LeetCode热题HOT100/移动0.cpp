//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size(), num = 0;
        while(i < n)
        {
            num = nums[i++];
            if(num != 0)
            {
                nums[j++] = num;
            }
        }
        while(j < n)
        {
            nums[j++] = 0;
        }
    }
};
