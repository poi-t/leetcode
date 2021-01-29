/*���������ǿյ�������ʾ�����Ǹ�������������ÿλ���ֶ��ǰ�������ķ�ʽ�洢�ģ�
����ÿ���ڵ�ֻ�ܴ洢һλ���֡����㽫��������ӣ�������ͬ��ʽ����һ����ʾ�͵�
��������Լ���������� 0 ֮�⣬���������������� 0��ͷ��*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans = new ListNode(-1);
    ListNode* root = ans;
	int sum = 0;
	bool carry = false;
	while(l1 != NULL || l2 != NULL)
	{
        sum = 0;
		if(l1 != NULL)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if(l2 != NULL)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		if(carry) ++sum;
		root->next = new ListNode(sum % 10);
		if(sum > 9) carry = true;
		else carry = false;
        root = root->next;
	}
	if(carry) root->next = new ListNode(1);
	return ans->next;
    }
};
