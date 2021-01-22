/*��ʵ��һ����������֮����˳���ӡ������������һ�а��մ����ҵ�˳���ӡ��
�ڶ��㰴�մ��ҵ����˳���ӡ���������ٰ��մ����ҵ�˳���ӡ���������Դ�����*/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        bool style = false;//��¼�Ƿ�ת 
        queue<TreeNode*> s;
        int n = 1;
        TreeNode* tmp = nullptr;
        s.push(root);
        while(! s.empty())
        {
            n = s.size();
            vector<int> res;
            for(int i = 0; i < n; ++i)
            {
                tmp = s.front();
                res.push_back(tmp->val);
                if(tmp->left != nullptr) s.push(tmp->left);
                if(tmp->right != nullptr) s.push(tmp->right);
                s.pop();
            }
            if(style) reverse(res.begin(), res.end());
            style = ! style;
            ans.push_back(res);
        }
        return ans;
    }
};
