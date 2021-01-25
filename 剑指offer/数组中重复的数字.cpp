/*һ������Ϊ n ������ nums ����������ֶ��� 0��n-1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�
����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ�������*/

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            while(nums[i] != i)
            {
                if(nums[nums[i]] == nums[i]) return nums[i];
                else swap(nums[i], nums[nums[i]]);
            }
        }
        return 0;
    }
};

