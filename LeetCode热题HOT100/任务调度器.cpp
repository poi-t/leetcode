/*����һ�����ַ�����?tasks ��ʾ�� CPU ��Ҫִ�е������б�����ÿ����ĸ��ʾһ�ֲ�ͬ���������
�������������˳��ִ�У�����ÿ�����񶼿����� 1 ����λʱ����ִ���ꡣ���κ�һ����λʱ�䣬CPU
�������һ�����񣬻��ߴ��ڴ���״̬��������ͬ���������֮������г���Ϊ���� n ����ȴʱ�䣬���
���������� n ����λʱ���� CPU ��ִ�в�ͬ�����񣬻����ڴ���״̬������Ҫ�������������������Ҫ�����ʱ�� */

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int length = tasks.size();
        if(n == 0) return length;
        vector<int> val(26, 0);
        for(char s : tasks)
        {
            val[s-'A'] += 1;
        }
        int maxp = 0, t = 0;
        for(int i : val)
        {
            if(i > maxp)
            {
                maxp = i;
                t = 1;
            }
            else if(i == maxp) 
            {
                ++t;
            }
        }
        return max(length, (maxp - 1) * (n + 1) + t);
    }
};
