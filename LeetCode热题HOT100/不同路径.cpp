/*һ��������λ��һ�� m x n?��������Ͻǣ�������ÿ��ֻ�����»��������ƶ�һ����
��������ͼ�ﵽ��������½����ܹ��ж�������ͬ��·����*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        long ans = 1;
        int t = m + n -2, f = min(m, n) - 1;
        for(int i = 1; i <= f; ++i, --t)
        {
            ans = ans * t / i;
        }
        return int(ans);
    }
};
