/*����һ�ö�������һ����������ӡ���������нڵ�ֵ�ĺ�Ϊ��������������·����
�����ĸ��ڵ㿪ʼ����һֱ��Ҷ�ڵ��������Ľڵ��γ�һ��·����*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    void dfs(TreeNode* root,vector<int>& res, int num)
    {
        res.push_back(root->val);
        num -= root->val;
        if(root->left == nullptr && root->right == nullptr)
        {
            if(num == 0) ans.push_back(res);
        }
        if(root->left !=nullptr) dfs(root->left, res, num);
        if(root->right != nullptr) dfs(root->right,res, num);
        res.pop_back();//���� 
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return ans;
        vector<int> res;
        dfs(root, res, sum);
        return ans;
    }
};
