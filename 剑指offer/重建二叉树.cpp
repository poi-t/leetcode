/*输入某二叉树的前序遍历和中序遍历的结果，请重建该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。*/
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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int x1,int x2,int y1,int y2)
    {
        if(x1 > x2 || y1 > y2)return nullptr;
        int val = preorder[x1];
        TreeNode* root = new TreeNode(val);
        int p = y1;
        while(inorder[p] != val) ++p;
        int cnt = p - y1;
        root->left = build(preorder, inorder, x1+1, x1+cnt, y1, p-1);
        root->right = build(preorder, inorder, x1+cnt+1, x2, p+1, y2);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0)return nullptr;
        TreeNode* root = build(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
        return root;
    }
};
