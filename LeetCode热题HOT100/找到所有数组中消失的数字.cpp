/*给定一个范围在? 1 ≤ a[i] ≤ n (?n = 数组大小 ) 的 整型数组，数组中的元素一些出现了两次，
另一些只出现一次。找到所有在 [1, n] 范围之间没有出现在数组中的数字。*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(), t = 0;
        for(int i = 0; i < n; ++i)
        {
            t = (nums[i] - 1) % n;
            nums[t] += n;
        }
        vector<int> ans;
        for(int i = 0; i < n; ++i)
        {
            if(nums[i] <= n)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
