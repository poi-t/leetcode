//给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int ans = 0, sum = 0;
        for (int x : nums) 
        {
            sum += x;
            if (mp.find(sum - k) != mp.end()) 
            {
                ans += mp[sum - k];
            }
            mp[sum]++;
        }
        return ans;
    }
};
