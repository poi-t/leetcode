/*����һ������Ϊ n �����ӣ�������Ӽ����������ȵ� m �Σ�m��n����������n>1����m>1����
ÿ�����ӵĳ��ȼ�Ϊ k[0],k[1]...k[m-1] ������ k[0]*k[1]*...*k[m-1] ���ܵ����˻��Ƕ��٣�*/

class Solution {
public:
    int cuttingRope(int n) {
        if(n <= 3) return n-1;
        int a = n / 3, b = n % 3;//�����г�3���޷��չ�3���г�2 
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

