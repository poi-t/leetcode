//���� n ���Ǹ�������ʾÿ�����Ϊ 1 �����ӵĸ߶�ͼ�����㰴�����е����ӣ�����֮���ܽӶ�����ˮ��

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, ans = 0��maxl = 0, maxr = 0;
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
