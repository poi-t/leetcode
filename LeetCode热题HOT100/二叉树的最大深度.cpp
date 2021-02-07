//����һ�����������ҳ��������ȡ������������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
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
