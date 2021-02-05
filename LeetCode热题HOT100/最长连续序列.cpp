//给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (const int& i : nums) 
		{
            s.insert(i);
        }
        int ans = 0;
        for (const int& i : s) 
		{
            if (!s.count(i - 1)) 
			{
                int num = i, res = 1;
                while (s.count(num + 1)) 
				{
                    ++num;
                    ++res;
                }

                ans = max(ans, res);
            }
        }
        return ans;
    }
};
