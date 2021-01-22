//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        int n = 0;
        ListNode* res = head;
        while(res != nullptr)
        {
            ++n;
            res = res->next;
        }
        vector<int> ans(n);
        for(int i = n-1; i >= 0; --i)
        {
            ans[i] = head->val;
            head = head->next;
        }
        return ans;
    }
};
