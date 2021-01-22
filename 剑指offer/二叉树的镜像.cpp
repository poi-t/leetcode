//请完成一个函数，输入一个二叉树，该函数输出它的镜像。
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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root == nullptr) return root;
        queue<TreeNode*> ss;
        ss.push(root);
        TreeNode *res = nullptr, *temp = nullptr;
        while(! ss.empty())
        {
            res = ss.front();
            ss.pop();
            temp = res->left;
            res->left = res->right;
            res->right = temp;
            if(res->left != nullptr) ss.push(res->left);
            if(res->right != nullptr) ss.push(res->right);
        }
        return root;
    }
};
