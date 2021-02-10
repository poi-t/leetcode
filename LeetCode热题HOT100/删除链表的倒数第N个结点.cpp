//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode *t1 = head, *t2 = res;
        for (int i = 0; i < n; ++i) 
        {
            t1 = t1->next;
        }
        while (t1 != nullptr) 
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        t2->next = t2->next->next;
        return res->next;
    }
};
