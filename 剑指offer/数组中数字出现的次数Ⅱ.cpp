//在一个数组 nums 中除一个数字只出现一次之外，其他数字都出现了三次。请找出那个只出现一次的数字。

/*对于出现三次的数字，各二进制位出现的次数都是3的倍数。
*统计所有数字的各二进制位的出现次数，并对3求余，结果为只出现一次的数字*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < 32; ++i)
        {
            int res = 0;
            for(int n : nums)
            {
                if(n & (1 << i)) ++res;
            }
            if(res % 3 == 1) ans ^= (1 << i);
        }
        return ans;
    }
};
