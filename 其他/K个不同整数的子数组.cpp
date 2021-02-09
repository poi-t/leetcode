//给定一个正整数数组A，如果A的某个子数组中不同整数的个数恰好为 K，则称A的这个连续、不一定独立的子数组为好子数组。

class Solution {
public:
    int solve(vector<int>& A, int K)
    {
        unordered_map<int, int> mp;
        int n = A.size(), left = 0, right = 0, ans = 0;
        while (right < n) 
        {
            ++mp[A[right++]];
            while (mp.size() > K) 
            {
                --mp[A[left]];
                if (mp[A[left]] == 0) mp.erase(A[left]);
                ++left;
            }
            ans += right - left;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& A, int K) {
    	//计算最多包含K和K-1个不同整数的个数，相减即为恰好K个的个数 
        return solve(A, K) - solve(A, K-1);
    }
};
