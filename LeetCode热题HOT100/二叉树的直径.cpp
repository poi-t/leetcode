/*给定一棵二叉树，你需要计算它的直径长度。一棵二叉树的直径长度是任意
两个结点路径长度中的最大值。这条路径可能穿过也可能不穿过根结点。*/
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
    int ans = 0;
    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        ans = max(ans, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return ans;
        dfs(root);
        return ans;
    }
};

 
