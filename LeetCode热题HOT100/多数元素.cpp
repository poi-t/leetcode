/*����һ����СΪ n �����飬�ҵ����еĶ���Ԫ�ء�����Ԫ����ָ�������г��ִ��� ���� n/2��Ԫ�ء�
����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int time = 0, ans = nums[0];
        for(int i : nums)
        {
            if(i == ans) ++time;
            else --time;
            if(time == 0)
            {
                ans = i;
                time = 1;
            }
        }
        return ans;
    }
}; 
