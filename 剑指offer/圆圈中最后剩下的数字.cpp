/*0,1,������,n-1��n�������ų�һ��ԲȦ��������0��ʼ��ÿ�δ����ԲȦ��ɾ����
m�����֣�ɾ�������һ�����ֿ�ʼ��������������ԲȦ��ʣ�µ����һ�����֡�*/

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
