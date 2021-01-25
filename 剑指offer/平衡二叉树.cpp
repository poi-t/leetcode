/*输入一棵二叉树的根节点，判断该树是不是平衡二叉树。如果某二叉树
中任意节点的左右子树的深度相差不超过1，那么它就是一棵平衡二叉树。*/
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
    bool ans = true;
    int solve(TreeNode* root)//返回以root为根的树高，如果ans为假直接返回-2，使递归快速结束 
    {
        if(! ans) return -2;
        if(root == nullptr) return 0;
        int a = solve(root->left);
        int b = solve(root->right);
        if(abs(a-b) > 1) 
        {
            ans = false;
            return -2;
        }
        else return 1 + max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        solve(root);
        return ans;
    }
};

 
