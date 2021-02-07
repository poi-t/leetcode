//给定两个大小为m和n的正序（从小到大）数组nums1和nums2。请你找出并返回这两个正序数组的中位数。

class Solution {
public:
    int solve(vector<int> nums1,vector<int> nums2,int k)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        int index1 = 0, index2 = 0, newindex1 = 0, newindex2 = 0;
        while(1)
        {
            if(index1 == n1) return nums2[index2 + k - 1];
            if(index2 == n2) return nums1[index1 + k - 1];
            if(k == 1) return min(nums1[index1], nums2[index2]);
            int newindex1 = min(n1-1, index1 + k/2 - 1);
            int newindex2 = min(n2-1, index2 + k/2 - 1);
            if(nums1[newindex1] > nums2[newindex2])
            {
                k -= (newindex2 - index2 + 1);
                index2 = newindex2 + 1;
            }
            else
            {
                k -= (newindex1 - index1 + 1);
                index1 = newindex1 + 1;
            }
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        if(n % 2 == 1) return solve(nums1, nums2, (n + 1) / 2);
        else return (solve(nums1, nums2,n/2) + solve(nums1, nums2, n/2 + 1)) / 2.0;
    }
};
