/*����һ�ö������ĸ��ڵ㣬�жϸ����ǲ���ƽ������������ĳ������
������ڵ���������������������1����ô������һ��ƽ���������*/
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
    bool ans = true;
    int solve(TreeNode* root)//������rootΪ�������ߣ����ansΪ��ֱ�ӷ���-2��ʹ�ݹ���ٽ��� 
    {
        if(! ans) return -2;
        if(root == nullptr) return 0;
        int a = solve(root->left);
        int b = solve(root->right);
        if(abs(a-b) > 1) 
        {
            ans = false;
            return -2;
        }
        else return 1 + max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        solve(root);
        return ans;
    }
};

 
