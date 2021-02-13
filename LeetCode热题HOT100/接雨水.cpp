//给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, ans = 0，maxl = 0, maxr = 0;
        while (left < right) 
        {
            if (height[left] < height[right]) 
            {
                if(height[left] >= maxl)
                {
                    maxl = height[left];
                }
                else
                {
                    ans += (maxl - height[left]);
                }
                ++left;
            }
            else 
            {
                if(height[right] >= maxr)
                {
                    maxr = height[right];
                }
                else
                {
                    ans += ( maxr - height[right]);
                }
                --right;
            }
        }
        return ans;
    }
};
