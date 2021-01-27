//����һ���������飬�����е�һ������������������һ�������顣������������ĺ͵����ֵ��

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int ans = nums[0];
        int sum = 0, minn = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += nums[i];
            ans = max(ans, sum-minn);
            minn = min(sum, minn);
        }
        return ans;
    }
};
