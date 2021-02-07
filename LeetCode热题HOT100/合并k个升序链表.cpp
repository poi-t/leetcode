//����һ���������飬ÿ�������Ѿ����������С����㽫��������ϲ���һ�����������У����غϲ��������
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
    struct cmp{
        bool operator()(ListNode* a,ListNode* b){return a->val > b->val;}
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> q;
        for(ListNode* i : lists)
        {
            if(i != nullptr) q.push(i);
        }
        ListNode* head = new ListNode();
        ListNode* ans = head, *res = nullptr;
        while(!q.empty())
        {
            res = q.top();
            q.pop();
            head->next = res;
            head = head->next;
            if(res->next != nullptr) q.push(res->next);
        }
        return ans->next;
    }
};
