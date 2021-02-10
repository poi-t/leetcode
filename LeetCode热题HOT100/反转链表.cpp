//反转一个单链表。

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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *t1 = nullptr, *t2 = head->next;
        while(t2 != nullptr)
        {
            head->next = t1;
            t1 = head;
            head = t2;
            t2 = t2->next;
        }
        head->next = t1;
        return head;
    }
};
