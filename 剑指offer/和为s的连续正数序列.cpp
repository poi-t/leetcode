/*����һ�������� target ��������к�Ϊ target ���������������С�
�����ڵ�������С�������У���ͬ���а����׸����ִ�С�������С�*/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        int i = 1, j = 2;
        while(i < j)
        {
            int sum = (i + j)*(j - i +1)/2;
            if(sum == target)
            {
                vector<int> res;
                for(int x = i; x <= j; ++x) res.push_back(x);
                ans.push_back(res);
                ++i;
                ++j;
            }
            else if(sum > target) ++i;
            else ++j;
        }
        return ans;
    }
};
