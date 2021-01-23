/*0,1,···,n-1这n个数字排成一个圆圈，从数字0开始，每次从这个圆圈里删除第
m个数字（删除后从下一个数字开始计数）。求出这个圆圈里剩下的最后一个数字。*/

class Solution {
public:
    int lastRemaining(int n, int m) {
        int ans = 0;
        for(int i = 2; i <= n; ++i)
        {
            ans = (ans + m) % i;
        }
        return ans;
    }
};
