/*����һ��������������ʼ�뻷�ĵ�һ���ڵ㡣��������޻����򷵻�null��Ϊ�˱�ʾ��������
�еĻ�������ʹ������ pos ��ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ���� ��� pos �� -1��
���ڸ�������û�л���ע�⣬pos ���������ڱ�ʶ�����������������Ϊ�������ݵ������С�*/
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

