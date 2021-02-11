/*给你一个整数数组nums ，数组中的元素互不相同 。返回该数组所有可能的子集（幂集）。
解集不能包含重复的子集。你可以按任意顺序返回解集。*/

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
