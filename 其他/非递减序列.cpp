//����һ������Ϊ n ���������飬�����ж������ı�1 Ԫ�ص�����£��������ܷ���һ���ǵݼ����С�
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool ans = true;
        int n = nums.size();
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] < nums[i-1])
            {
                if(!ans) return ans;
                ans = !ans; 
                if(i > 1 && nums[i] < nums[i-2])
                {
                    nums[i] = nums[i-1];
                }
            }
        }
        return true;
    }
};
