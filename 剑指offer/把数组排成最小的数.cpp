//输入一个非负整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个

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
