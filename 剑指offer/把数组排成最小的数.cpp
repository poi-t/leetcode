//����һ���Ǹ��������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ��

class Solution {
public:
    string minNumber(vector<int>& nums) {
        string ans;
        vector<string> res;
        for(int i : nums)
        {
            res.push_back(to_string(i));
        }
        sort(res.begin(), res.end(), cmp);
        for(string s : res)
        {
            ans += s;
        }
        return ans;
    }

    static bool cmp(string& a, string& b)
    {
        return a + b < b + a;
    }
};
