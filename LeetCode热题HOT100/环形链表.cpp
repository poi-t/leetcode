/*����һ�������ж��������Ƿ��л��������������ĳ���ڵ㣬����ͨ����������nextָ��
�ٴε���������д��ڻ���Ϊ�˱�ʾ���������еĻ�������ʹ������pos����ʾ����β����
�������е�λ�ã������� 0 ��ʼ�������pos�� -1�����ڸ�������û�л���ע��pos����Ϊ��
�����д��ݣ�������Ϊ�˱�ʶ�����ʵ���������������д��ڻ����򷵻�true�����򣬷��� false*/
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
