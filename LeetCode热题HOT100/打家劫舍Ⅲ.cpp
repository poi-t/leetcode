/*���ϴδ����һ���ֵ�֮���һȦ���ݺ�С͵�ַ�����һ���µĿ����Եĵ������������ֻ��һ
����ڣ����ǳ�֮Ϊ�������� ���ˡ�����֮�⣬ÿ����������ֻ��һ��������������֮������һ��
���֮�󣬴�����С͵��ʶ��������ط������з��ݵ�����������һ�ö��������� �������ֱ������
�ķ�����ͬһ�����ϱ���٣����ݽ��Զ������������ڲ���������������£�С͵һ���ܹ���ȡ����߽�*/

class Solution {
public:
    unordered_map<TreeNode*, int> f, g;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        dfs(root->left);
        dfs(root->right);
        f[root] = root->val + g[root->left] + g[root->right];
        g[root] = max(f[root->left], g[root->left]) + max(f[root->right], g[root->right]);
    }
    int rob(TreeNode* root) {
        dfs(root);
        return max(f[root], g[root]);
    }
};
