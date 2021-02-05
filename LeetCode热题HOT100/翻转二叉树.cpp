//·­×ªÒ»¿Ã¶þ²æÊ÷¡£
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
    queue<TreeNode*> s;
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode *res, *next;
        s.push(root);
        while(!s.empty())
        {
            res = s.front();
            s.pop();
            if(res->left != nullptr || res->right != nullptr)
            {
               next = res->left;
               res->left = res->right;
               res->right = next;
               if(res->left!=nullptr) s.push(res->left);
               if(res->right!=nullptr) s.push(res->right);
            }
        }
    return root;
    }
};
