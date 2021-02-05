/*����һ���������� nums ���ҵ�������ϸ���������еĳ��ȡ���������������������
�������У�ɾ������ɾ���������е�Ԫ�ض����ı�����Ԫ�ص�˳��*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        vector<int> dp(n, 1);
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(nums[i] > nums[j]) 
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            if(dp[i] > ans) ans = dp[i];
        }
        return ans;
    }
};

