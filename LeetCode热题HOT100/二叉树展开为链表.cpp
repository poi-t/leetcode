/*给你二叉树的根结点 root ，请你将它展开为一个单链表：
展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
展开后的单链表应该与二叉树 先序遍历 顺序相同。*/
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
    TreeNode* dfs(TreeNode* root)
    {
        if(root == nullptr) return root;
        TreeNode* left = dfs(root->left);
        TreeNode* right = dfs(root->right);
        root->left = nullptr;
        if(left == nullptr) root->right = right;
        else
        {
            TreeNode* res = left;
            while(res->right != nullptr) res = res->right;
            res->right = right;
            root->right = left;
        }
        
        return root;
    }
    void flatten(TreeNode* root) {
        dfs(root);
    }
};

