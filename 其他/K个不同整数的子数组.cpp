//����һ������������A�����A��ĳ���������в�ͬ�����ĸ���ǡ��Ϊ K�����A�������������һ��������������Ϊ�������顣

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
    	//����������K��K-1����ͬ�����ĸ����������Ϊǡ��K���ĸ��� 
        return solve(A, K) - solve(A, K-1);
    }
};
