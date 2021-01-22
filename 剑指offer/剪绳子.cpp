/*给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n>1并且m>1），
每段绳子的长度记为 k[0],k[1]...k[m-1] 。请问 k[0]*k[1]*...*k[m-1] 可能的最大乘积是多少？*/

class Solution {
public:
    int cuttingRope(int n) {
        if(n <= 3) return n-1;
        int a = n / 3, b = n % 3;//尽量切成3，无法凑够3就切成2 
        int ans = 1;
        if(b == 0)
        {
            while(a--) ans *= 3;
        }
        else if(b == 1)
        {
            while(--a) ans *= 3;
            ans *= 4;
        }
        else
        {
            while(a--) ans *= 3;
            ans *= 2;
        }
        return ans;
    }
};

