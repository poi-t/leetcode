//给定一个二叉树，判断其是否是一个有效的二叉搜索树。
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long res = long(INT_MIN) - 1;
    bool ans = true;
    void dfs(TreeNode* root)
    {
        if(root == nullptr || !ans) return;
        dfs(root->left);
        if(root->val <= res) 
        {
            ans = false;
            return;
        }
        res = root->val;
        dfs(root->right);
    }
    bool isValidBST(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
