/*����������ĸ���� root �����㽫��չ��Ϊһ��������
չ����ĵ�����Ӧ��ͬ��ʹ�� TreeNode ������ right ��ָ��ָ����������һ����㣬������ָ��ʼ��Ϊ null ��
չ����ĵ�����Ӧ��������� ������� ˳����ͬ��*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode* root)
    {
        if(root == nullptr) return root;
        TreeNode* left = dfs(root->left);
        TreeNode* right = dfs(root->right);
        root->left = nullptr;
        if(left == nullptr) root->right = right;
        else
        {
            TreeNode* res = left;
            while(res->right != nullptr) res = res->right;
            res->right = right;
            root->right = left;
        }
        
        return root;
    }
    void flatten(TreeNode* root) {
        dfs(root);
    }
};

