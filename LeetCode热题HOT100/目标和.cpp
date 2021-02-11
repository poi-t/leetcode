/*����һ���Ǹ��������飬��һ��Ŀ������S������������������+��-�����������е�����һ��������
�㶼���Դ�+��-��ѡ��һ�����������ǰ�档���ؿ���ʹ���������ΪĿ���� S ��������ӷ��ŵķ�������*/
/*
  �����൱��Ѱ������������sum[A], sum[B],ʹ��sum[A]-sum{B] = S, 
  ��Ϊ sum[A]-sum{B]+sum[A]+sum{B] = S + sum,
  ��Ϊ sum[A] = (S+sum)/2,�ȼ�����ڣ�S+sum��/2����������������������S+sum��Ϊż������sum>=S;
 */ 
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int n = nums.size(), sum = 0, res = 0;
        for(int i : nums)
        {
            sum += i;
        }
        if(S > sum || (S + sum) % 2 == 1) return 0;
        sum = (S + sum) / 2;
        vector<int> dp(sum+1, 0);
        dp[0] = 1;
        for(int i = 0; i < n; ++i)
        {
            res = nums[i];
            for(int j = sum; j >= res; --j)
            {
                dp[j] += dp[j - res];
            }
        }
        return dp[sum];
    }
};
