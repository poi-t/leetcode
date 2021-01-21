/*输入一棵二叉树和一个整数，打印出二叉树中节点值的和为输入整数的所有路径。
从树的根节点开始往下一直到叶节点所经过的节点形成一条路径。*/

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
        res.pop_back();//回溯 
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return ans;
        vector<int> res;
        dfs(root, res, sum);
        return ans;
    }
};
