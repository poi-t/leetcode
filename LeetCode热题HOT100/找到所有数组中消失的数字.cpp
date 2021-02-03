/*����һ����Χ��? 1 �� a[i] �� n (?n = �����С ) �� �������飬�����е�Ԫ��һЩ���������Σ�
��һЩֻ����һ�Ρ��ҵ������� [1, n] ��Χ֮��û�г����������е����֡�*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(), t = 0;
        for(int i = 0; i < n; ++i)
        {
            t = (nums[i] - 1) % n;
            nums[t] += n;
        }
        vector<int> ans;
        for(int i = 0; i < n; ++i)
        {
            if(nums[i] <= n)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
