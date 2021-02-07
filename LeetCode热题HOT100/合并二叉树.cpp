/*���������������������㽫�����е�һ�����ǵ���һ����ʱ��������������һЩ�ڵ����ص���
����Ҫ�����Ǻϲ�Ϊһ���µĶ��������ϲ��Ĺ�������������ڵ��ص�����ô�����ǵ�ֵ�����Ϊ
�ڵ�ϲ������ֵ������ΪNULL�Ľڵ㽫ֱ����Ϊ�¶������Ľڵ㡣*/
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr) {
            return t2;
        }
        if (t2 == nullptr) {
            return t1;
        }
        TreeNode* ans = new TreeNode(t1->val + t2->val);
        ans->left = mergeTrees(t1->left, t2->left);
        ans->right = mergeTrees(t1->right, t2->right);
        return ans;
    }
};
