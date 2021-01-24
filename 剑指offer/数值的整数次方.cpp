//实现函数double Power(double base, int exponent)，求base的exponent次方。不得使用库函数，同时不需要考虑大数问题。

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n < 0) //保证为正数幂次 
        {
            if(n == INT_MIN) 
            {
                ans *= (1.0/x);
                n += 1;
            }
            n = -n;
            x = 1.0/x;
        }
        while(n != 0)
        {
            if(n % 2 == 1) ans *= x;
            x = x*x;;
            n /= 2;
        }
        return ans;
    }
};
