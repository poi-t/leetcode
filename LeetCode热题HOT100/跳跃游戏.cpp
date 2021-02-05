/*����һ���Ǹ��������� nums �������λ������� ��һ���±� �������е�ÿ��Ԫ��
�������ڸ�λ�ÿ�����Ծ����󳤶ȡ��ж����Ƿ��ܹ��������һ���±ꡣ*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return true;
        int i = 0, key = 0;
        while(i < n)
        {
            if(i + nums[i] >= n-1) return true;
		    if(nums[i] == 0)return false;
		    key = i + 1;
		    int maxx = nums[key];
		    for(int j = key; j <= i + nums[i]; ++j)
		    {
                if(j + nums[j] > key + maxx)
                {
                    key = j;
                    maxx = nums[key];
                }
		    }
		    i = key;
        }
        return true;
    }
};
