/*假设有打乱顺序的一群人站成一个队列，数组 people 表示队列中一些人的属性（不一定按顺序）。
每个 people[i] = [hi, ki] 表示第 i 个人的身高为 hi ，前面 正好 有 ki 个身高大于或等于 hi 的人。
请你重新构造并返回输入数组?people 所表示的队列。返回的队列应该格式化为数组 queue ，其中
 queue[j] = [hj, kj] 是队列中第 j 个人的属性（queue[0] 是排在队列前面的人）*/

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

