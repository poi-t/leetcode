/*·��������Ϊһ������������ڵ�������ظ��ڵ�-�ӽڵ����ӣ��ﵽ����ڵ�����С�
��·�� ���ٰ���һ���ڵ㣬�Ҳ�һ���������ڵ㡣·������·���и��ڵ�ֵ���ܺ͡�
����һ���������ĸ��ڵ� root �����������·���� ��*/

class Solution {
public:
    int maxx = INT_MIN;
    int num = 0;
    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int tleft = max(0, dfs(root->left));
        int tright = max(0, dfs(root->right));
        num = root->val + tleft + tright;
        maxx = max(maxx, num);
        return (root->val + max(tleft, tright));
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxx;
    }
};

