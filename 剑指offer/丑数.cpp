//���ǰ�ֻ���������� 2��3 �� 5 ��������������Ugly Number�����󰴴�С�����˳��ĵ� n ��������

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n);
        ans[0] = 1;
        int x = 0, y = 0, z = 0;//��ʼʱ��ָ���һ������ 
        int newx = 0, newy = 0, newz = 0;
        for(int i = 1; i < n; ++i)//���㵱ǰָ������Ķ�Ӧ��������С��Ϊ��һ������ 
        {
            newx = 2 * ans[x];
            newy = 3 * ans[y];
            newz = 5 * ans[z];
            ans[i] = min(newx, newy);
            ans[i] = min(ans[i], newz);
            //����ָ������������µĳ�������ͬʱΪ2��3��5�ж�����ı���������������Ҫ�����ж� 
            if(ans[i] == newx) ++x;
            if(ans[i] == newy) ++y;
            if(ans[i] == newz) ++z;
        }
        return ans[n-1];
    }
};
