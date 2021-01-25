/*�������ö�����A��B���ж�B�ǲ���A���ӽṹ��(Լ��������������һ�������ӽṹ)
B��A���ӽṹ�� �� A���г��ֺ�B��ͬ�Ľṹ�ͽڵ�ֵ��*/
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
    bool judge(TreeNode* a, TreeNode* b)
    {
        if(b == nullptr) return true;
        if(a == nullptr || a->val != b->val) return false;
        return judge(a->left, b->left) && judge(a->right, b->right);
    }
    
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(A == nullptr || B == nullptr) return false;
        if(A->val == B->val && (judge(A->left, B->left)) && (judge(A->right, B->right)))
        {
            return true;
        }
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};
