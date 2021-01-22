//���ϵ��´�ӡ����������ÿ���ڵ㣬ͬһ��Ľڵ㰴�մ����ҵ�˳���ӡ��
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
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> s;
        s.push(root);
        TreeNode* res;
        while(!s.empty())
        {
            res = s.front();
            s.pop();
            ans.push_back(res->val);
            if(res->left != nullptr) s.push(res->left);
            if(res->right != nullptr) s.push(res->right);
        }
        return ans;
    }
};
