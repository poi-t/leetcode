//ʵ�ֺ���double Power(double base, int exponent)����base��exponent�η�������ʹ�ÿ⺯����ͬʱ����Ҫ���Ǵ������⡣

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n < 0) //��֤Ϊ�����ݴ� 
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
