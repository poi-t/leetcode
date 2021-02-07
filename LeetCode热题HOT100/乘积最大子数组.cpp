/*����һ���������� nums �������ҳ������г˻��������������飨����������
���ٰ���һ�����֣��������ظ�����������Ӧ�ĳ˻���*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(),res = 0, ans = nums[0];
        int maxp = nums[0], minp = nums[0];
        for (int i = 1; i < n; ++i) 
        {
            res = maxp;
            maxp = max(max(nums[i], minp * nums[i]), maxp * nums[i]);
            minp = min(min(nums[i], minp * nums[i]), res * nums[i]);
            ans = max(ans, maxp);
        }
        return ans;
    }
};
