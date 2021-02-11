//给定一个二叉树，检查它是否是镜像对称的。

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
    bool solve(TreeNode* a, TreeNode* b)
    {
        if(a == nullptr && b == nullptr) return true;
        if(a == nullptr || b == nullptr || a->val != b->val) return false;
        return solve(a->left, b->right) && solve(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return solve(root->left, root->right);
    }
};
