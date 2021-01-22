/*输入一棵二叉树的根节点，求该树的深度。从根节点到叶节点依次经过的节点
（含根、叶节点）形成树的一条路径，最长路径的长度为树的深度。*/
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
        queue<TreeNode*> ss;
        ss.push(root);
        int n = 1, ans = 0;
        TreeNode* res = nullptr;
        while(! ss.empty())
        {
            ans += 1;
            n = ss.size();
            for(int i = 0; i < n; ++i)
            {
                res = ss.front();
                ss.pop();
                if(res->left != nullptr) ss.push(res->left);
                if(res->right != nullptr) ss.push(res->right);
            }
        }
        return ans;
    }
};
