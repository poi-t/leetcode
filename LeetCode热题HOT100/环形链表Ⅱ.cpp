/*给定一个链表，返回链表开始入环的第一个节点。如果链表无环，则返回null。为了表示给定链表
中的环，我们使用整数 pos 表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，
则在该链表中没有环。注意，pos 仅仅是用于标识环的情况，并不会作为参数传递到函数中。*/
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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode *fast = head, *slow = head,  *ans = head;
        while(true)
        {
            if(fast->next == nullptr || fast->next->next == nullptr) return nullptr;
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        while(slow != ans)
        {
            slow = slow->next;
            ans = ans->next;
        }
        return ans;
    }
};

