//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵ�
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(0), *ans = root;
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1->val < l2 ->val)
            {
                root->next = l1;
                l1 = l1->next;
            }
            else
            {
                root->next = l2;
                l2 = l2->next;
            }
            root = root->next;
        }
        if(l1 != nullptr) root->next = l1;
        else if(l2 != nullptr) root->next = l2;
        return ans->next;
    }
};

