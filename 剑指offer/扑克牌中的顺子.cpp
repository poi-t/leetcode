/*从扑克牌中随机抽5张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字
本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能视为 14。*/

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int tmax = 0, tmin = 14;
        set<int> s;
        for(int i = 0; i < 5; ++i)
        {
            if(nums[i] == 0) continue;
            tmax = max(tmax, nums[i]);
            tmin = min(tmin, nums[i]);
            if(s.count(nums[i])) return false;
            s.insert(nums[i]);
        }
        return (tmax - tmin) < 5;//五张顺子差最大为4，可将王视为任意缺少或两边数据 
    }
};
