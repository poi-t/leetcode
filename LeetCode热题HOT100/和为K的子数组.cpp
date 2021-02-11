//����һ�����������һ������ k������Ҫ�ҵ��������к�Ϊ k ��������������ĸ�����

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
