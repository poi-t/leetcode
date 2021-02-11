/*����һ����������nums �������е�Ԫ�ػ�����ͬ �����ظ��������п��ܵ��Ӽ����ݼ�����
�⼯���ܰ����ظ����Ӽ�������԰�����˳�򷵻ؽ⼯��*/

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> res;
    int n = 0;
    void solve(vector<int>& nums, int p)
    {
        ans.push_back(res);
        for(int i = p; i < n; ++i)
        {
            res.push_back(nums[i]);
            solve(nums, i + 1);
            res.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        solve(nums, 0);
        return ans;
    }
};
