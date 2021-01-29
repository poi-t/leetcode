/*给你一个包含 n 个整数的数组nums，判断?nums中是否存在三个元素 a，b，c ，
使得?a + b + c = 0 请你找出所有和为 0 且不重复的三元组。*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int a = 0; a < n; ++a)
        {
            if(a > 0 && nums[a] == nums[a-1]) continue;//避免重复 
            int res = -nums[a], c = n-1;
            for(int b = a + 1; b < n; ++b)
            {
                if(b > a + 1 && nums[b] == nums[b-1]) continue;////避免重复 
                while(c > b && nums[b] + nums[c] > res) --c;
                if(b == c) break;
                if(nums[b] + nums[c] == res) ans.push_back({nums[a],nums[b],nums[c]});
            }
        }
        return ans;
    }
};

