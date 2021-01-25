/*一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
请找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。*/

//先将两个数字分到两组，且保证相同数字分到一组 ，然后对两组分别异或可得两个只出现一次的数
//先将全部数字异或，按其中一个为1的位进行分组即可达到目的
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res = 0;
        for(int i : nums)
        {
            res ^= i;
        }
        int f = 0;
        while((res & (1 << f)) == 0) //这里要注意括号，否则容易出差 
        {
            ++f;
        }
        f = 1 << f;
        int t1 = 0, t2 = 0;
        for(int i : nums)
        {
            if((i & f) == 0) t1 ^= i;
            else t2 ^= i;
        }
        return {t1, t2};
    }
};
