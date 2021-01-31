/*给出二叉 搜索 树的根节点，该树的节点值各不相同，请你将其转换为累加树，
使每个节点 node?的新值等于原树中大于或等于node.val的值之和。*/
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
    int num = 0;
    void dfs(TreeNode* root)
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            root->val += num;
            num = root->val;
            return;
        }
        if(root->right != nullptr) dfs(root->right);
        root->val += num;
        num = root->val;
        if(root->left != nullptr) dfs(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode* ans = root;
        dfs(root);
        return ans;
    }
};

