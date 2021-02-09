/*给定一个二叉树，它的每个结点都存放着一个整数值。找出路径和等于给定数值的路径总数。
路径不需要从根节点开始，也不需要在叶子节点结束，但是路径方向必须是向下的（只能从父节点到子节点）*/

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
    int count = 0;

    void dfs(TreeNode* root, int sum)
    {
        if(root == nullptr) return;
        if(sum - root->val == 0) ++count;
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return count;
    }
};
