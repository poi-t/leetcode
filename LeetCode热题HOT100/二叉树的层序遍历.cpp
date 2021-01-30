//给你一个二叉树，请你返回其按层序遍历得到的节点值。
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> s;
        s.push(root);
        int n = s.size();
        while(!s.empty())
        {
            vector<int> res;
            n = s.size();
            for(int i = 0; i < n; ++i)
            {
                TreeNode* now = s.front();
                s.pop();
                res.push_back(now->val);
                if(now->left != nullptr) s.push(now->left);
                if(now->right != nullptr) s.push(now->right);
            }
            ans.push_back(res);
        }
        return ans;
    }
};
