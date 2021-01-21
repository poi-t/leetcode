//我们把只包含质因子 2、3 和 5 的数称作丑数（Ugly Number）。求按从小到大的顺序的第 n 个丑数。

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n);
        ans[0] = 1;
        int x = 0, y = 0, z = 0;//初始时都指向第一个丑数 
        int newx = 0, newy = 0, newz = 0;
        for(int i = 1; i < n; ++i)//计算当前指向的数的对应倍数，最小的为下一个丑数 
        {
            newx = 2 * ans[x];
            newy = 3 * ans[y];
            newz = 5 * ans[z];
            ans[i] = min(newx, newy);
            ans[i] = min(ans[i], newz);
            //更新指向的数，由于新的丑数可能同时为2，3，5中多个数的倍数，所以三个都要进行判断 
            if(ans[i] == newx) ++x;
            if(ans[i] == newy) ++y;
            if(ans[i] == newz) ++z;
        }
        return ans[n-1];
    }
};
