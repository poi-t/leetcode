/*��������֮��ĺ�������ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ�� 
������������ x �� y����������֮��ĺ������롣*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = x ^ y, ans = 0;
        while(t > 0)
        {
            ++ans;
            t = t & (t - 1);
        }
        return ans;
    }
};
