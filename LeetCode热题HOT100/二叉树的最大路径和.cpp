/*路径被定义为一条从树中任意节点出发，沿父节点-子节点连接，达到任意节点的序列。
该路径 至少包含一个节点，且不一定经过根节点。路径和是路径中各节点值的总和。
给你一个二叉树的根节点 root ，返回其最大路径和 。*/

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

