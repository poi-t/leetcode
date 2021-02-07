//����һ����������nums���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], n = nums.size(), tmin = 0, sum = 0;
        for(int i : nums)
        {
            sum += i;
            ans = max(ans, sum - tmin);
            tmin = min(tmin, sum);
        }
        return ans;
    }
};
