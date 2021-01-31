/*�������� ���� ���ĸ��ڵ㣬�����Ľڵ�ֵ������ͬ�����㽫��ת��Ϊ�ۼ�����
ʹÿ���ڵ� node?����ֵ����ԭ���д��ڻ����node.val��ֵ֮�͡�*/
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
    int num = 0;
    void dfs(TreeNode* root)
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            root->val += num;
            num = root->val;
            return;
        }
        if(root->right != nullptr) dfs(root->right);
        root->val += num;
        num = root->val;
        if(root->left != nullptr) dfs(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode* ans = root;
        dfs(root);
        return ans;
    }
};

