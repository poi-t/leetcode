//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], times = 0;
        for(int i : nums)//Ħ��ͶƱ�� 
        {
            if(i == ans) ++times;
            else if(times == 0) 
            {
                ans = i;
                times = 1;
            }
            else --times;
        }
        return ans;
    }
};
