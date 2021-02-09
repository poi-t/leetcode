//给定一个 没有重复 数字的序列，返回其所有可能的全排列。

class Solution {
public:
    vector<int> res;
    vector<vector<int>> ans;
    int n = 0;
    void dfs(vector<int>& nums, vector<bool>& vis, int t)
    {
        if(t == n)
        {
            ans.push_back(res);
            return;
        }
        for(int i = 0; i < n; ++i)
        {
            if( !vis[i])
            {
                res.push_back(nums[i]);
                vis[i] = true;
                dfs(nums, vis, t+1);
                vis[i] = false;
                res.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<bool> vis(n, false);
        dfs(nums, vis, 0);
        return ans;
    }
};
