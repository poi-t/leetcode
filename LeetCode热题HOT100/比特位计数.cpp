//����һ���Ǹ�����num������0 ��i��num��Χ�е�ÿ������i����������������е�1����Ŀ����������Ϊ���鷵�ء�
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1);
        ans[0] = 0;
        int i = 0, b = 1;
        while(b <= num)
        {
            while(i < b && i + b <= num)
            {
                ans[b + i] = ans[i] + 1;
                ++i;
            }
            i = 0;
            b *= 2;
        }
        return ans;
    }
};
