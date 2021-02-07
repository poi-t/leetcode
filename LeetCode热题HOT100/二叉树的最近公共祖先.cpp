//给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
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
    TreeNode* dfs(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(root == nullptr) return nullptr;
        if(root == p ||root == q) return root;
        TreeNode* t1 = dfs(root->left, p, q);
        TreeNode* t2 = dfs(root->right, p, q);
        if(t1 == nullptr) return t2;
        if(t2 == nullptr) return t1;
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root,p,q);
    }
};
