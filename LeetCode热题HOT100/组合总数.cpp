/*给定一个无重复元素的数组candidates和一个目标数?target，找出candidates中
所有可以使数字和为target的组合。candidates?中的数字可以无限制重复被选取*/

class Solution {
public:
    vector<vector<int> > ans;
    vector<int> code;
    
    void dfs(vector<int>& candidates, int target, int now)
    {
        if(target == 0) 
        {
            ans.push_back(code);
            return;
        }
        for(int i = now; i < candidates.size(); ++i)
        {
            if(target >= candidates[i]) 
            {
                code.push_back(candidates[i]);
                dfs(candidates, target-candidates[i], i);
                code.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	dfs(candidates,target,0);
	return ans;
    }
};

