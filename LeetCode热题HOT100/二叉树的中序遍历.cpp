//����һ���������ĸ��ڵ� root �������������������

class Solution {
public:
    vector<int> ans;
    void dfs(TreeNode* root)
    {
        if(root->left != nullptr) dfs(root->left);
        ans.push_back(root->val);
        if(root->right != nullptr) dfs(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return ans;
        dfs(root);
        return ans;
    }
};
