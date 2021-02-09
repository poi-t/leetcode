/*�����д���˳���һȺ��վ��һ�����У����� people ��ʾ������һЩ�˵����ԣ���һ����˳�򣩡�
ÿ�� people[i] = [hi, ki] ��ʾ�� i ���˵����Ϊ hi ��ǰ�� ���� �� ki ����ߴ��ڻ���� hi ���ˡ�
�������¹��첢������������?people ����ʾ�Ķ��С����صĶ���Ӧ�ø�ʽ��Ϊ���� queue ������
 queue[j] = [hj, kj] �Ƕ����е� j ���˵����ԣ�queue[0] �����ڶ���ǰ����ˣ�*/

class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b)
    {
        return a[0] == b[0] ? (a[1] > b[1]) : (a[0] < b[0]);
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        int n = people.size(), res = 0;
        vector<vector<int>> ans(n);
        for (const vector<int>& person: people) 
        {
            res = person[1];
            for (int i = 0; i < n; ++i) 
            {
                if(ans[i].empty() && res-- == 0)
                {
                    ans[i] = person;
                    break;
                }
            }
        }
        return ans;
    }
};

