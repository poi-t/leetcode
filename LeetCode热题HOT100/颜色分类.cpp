/*����һ��������ɫ����ɫ����ɫ��һ��?n ��Ԫ�ص����飬ԭ�ض����ǽ�������ʹ����ͬ��ɫ��Ԫ�����ڣ�
�����պ�ɫ����ɫ����ɫ˳�����С�ʹ������ 0��?1 �� 2 �ֱ��ʾ��ɫ����ɫ����ɫ��*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), p = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (nums[i] == 0) 
            {
                nums[i] = nums[p];
                nums[p++] = 0;
            }
        }
        for (int i = p; i < n; ++i) 
        {
            if (nums[i] == 1) 
            {
                nums[i] = nums[p];
                nums[p++] = 1;
            }
        }
    }
};
