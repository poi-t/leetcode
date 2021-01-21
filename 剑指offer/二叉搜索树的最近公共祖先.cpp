//给定一个二叉搜索树, 找到该树中两个指定节点的最近公共祖先

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(true)
        {
            if(root->val > p->val && root->val > q->val)
            {
                root = root->left;
            }
            else if(root->val < p->val && root->val < q->val)
            {
                root = root->right;
            }
            else break;
        }
        return root;
    }
};
