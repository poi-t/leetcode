/*����һ��������������ÿ����㶼�����һ������ֵ���ҳ�·���͵��ڸ�����ֵ��·��������
·������Ҫ�Ӹ��ڵ㿪ʼ��Ҳ����Ҫ��Ҷ�ӽڵ����������·��������������µģ�ֻ�ܴӸ��ڵ㵽�ӽڵ㣩*/

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
    int count = 0;

    void dfs(TreeNode* root, int sum)
    {
        if(root == nullptr) return;
        if(sum - root->val == 0) ++count;
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return count;
    }
};
