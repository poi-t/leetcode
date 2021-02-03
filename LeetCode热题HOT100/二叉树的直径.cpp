/*����һ�ö�����������Ҫ��������ֱ�����ȡ�һ�ö�������ֱ������������
�������·�������е����ֵ������·�����ܴ���Ҳ���ܲ���������㡣*/
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
    int ans = 0;
    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        ans = max(ans, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return ans;
        dfs(root);
        return ans;
    }
};

 
