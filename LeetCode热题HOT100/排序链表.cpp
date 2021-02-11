//给你链表的头结点 head ，请将其按 升序 排列并返回 排序后的链表 。
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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *fast = head->next, *slow = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = slow->next;
        slow->next = nullptr;
        return merge(sortList(head), sortList(fast));
    }

    ListNode* merge(ListNode* head1, ListNode* head2)
    {
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        while(head1 != nullptr && head2 != nullptr)
        {
            if(head1->val > head2->val)
            {
                temp->next = head2;
                head2 = head2->next;
            }
            else
            {
                temp->next = head1;
                head1 = head1->next;
            }
            temp = temp->next;
        }
        if(head1 == nullptr) temp->next = head2;
        else if(head2 == nullptr) temp->next = head1;
        return res->next;
    }
};
