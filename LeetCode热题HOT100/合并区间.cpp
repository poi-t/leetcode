/*以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi]。
请你合并所有重叠的区间，并返回一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间。*/

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

