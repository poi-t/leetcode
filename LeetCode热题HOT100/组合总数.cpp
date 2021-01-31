/*����һ�����ظ�Ԫ�ص�����candidates��һ��Ŀ����?target���ҳ�candidates��
���п���ʹ���ֺ�Ϊtarget����ϡ�candidates?�е����ֿ����������ظ���ѡȡ*/

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

