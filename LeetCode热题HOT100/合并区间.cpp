/*������ intervals ��ʾ���ɸ�����ļ��ϣ����е�������Ϊ intervals[i] = [starti, endi]��
����ϲ������ص������䣬������һ�����ص����������飬��������ǡ�ø��������е��������䡣*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() < 2) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int first = intervals[0][0];
        int tail = intervals[0][1];
        for(const vector<int>& i : intervals)
        {
            if(i[0] <= tail) tail = max(tail, i[1]);
            else
            {
                ans.push_back({first,tail});
                first = i[0];
                tail = i[1];
            }
        }
        ans.push_back({first,tail});
        return ans;
    }
};

