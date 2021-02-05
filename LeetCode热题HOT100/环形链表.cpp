/*给定一个链表，判断链表中是否有环。如果链表中有某个节点，可以通过连续跟踪next指针
再次到达，则链表中存在环。为了表示给定链表中的环，我们使用整数pos来表示链表尾连接
到链表中的位置（索引从 0 开始）。如果pos是 -1，则在该链表中没有环。注意pos不作为参
数进行传递，仅仅是为了标识链表的实际情况。如果链表中存在环，则返回true。否则，返回 false*/
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
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) 
        {
            return false;
        }
        ListNode *slow = head, *fast = head->next;
        while (slow != fast) 
        {
            if (fast == nullptr || fast->next == nullptr) 
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
