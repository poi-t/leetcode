//����һ�ö��������������ҳ����е�k��Ľڵ㡣

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
    int n = 0, ans = 0;
    void dfs(TreeNode* root)
    {
        if(root->right != nullptr) dfs(root->right);
        --n;
        if(n == 0) ans = root->val;
        if(n > 0 && root->left != nullptr) dfs(root->left);
    }
    int kthLargest(TreeNode* root, int k) {
        n = k;
        dfs(root);
        return ans;
    }
}; 
