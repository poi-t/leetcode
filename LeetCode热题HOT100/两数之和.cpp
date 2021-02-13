/*给定一个整数数组 nums和一个整数目标值target，请你在该数组中找出 和为目标值的那两个整数，并返回
它们的数组下标。你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    unordered_map<int,int> mp;
        int n = nums.size();
	    for(int i = 0; i < n; ++i)
	    {
		    if(mp.count(target - nums[i]))
		    {
			    return {i, mp[target - nums[i]]};
		    }
		    mp[nums[i]] = i;
	    }
	    return {};
    }
};
