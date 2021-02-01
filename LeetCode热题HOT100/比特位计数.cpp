//给定一个非负整数num。对于0 ≤i≤num范围中的每个数字i，计算其二进制数中的1的数目并将它们作为数组返回。
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1);
        ans[0] = 0;
        int i = 0, b = 1;
        while(b <= num)
        {
            while(i < b && i + b <= num)
            {
                ans[b + i] = ans[i] + 1;
                ++i;
            }
            i = 0;
            b *= 2;
        }
        return ans;
    }
};
