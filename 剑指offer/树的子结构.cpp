/*输入两棵二叉树A和B，判断B是不是A的子结构。(约定空树不是任意一个树的子结构)
B是A的子结构， 即 A中有出现和B相同的结构和节点值。*/
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
