//给定一个二叉树，找出其最大深度。二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* res = root;
        int n = 1;
        while(! q.empty())
        {
            ans += 1;
            n = q.size();
            for(int i = 0; i < n; ++i)
            {
                res = q.front();
                q.pop();
                if(res->left != nullptr) q.push(res->left);
                if(res->right != nullptr) q.push(res->right);
            }
        }
        return ans;
    }
};
