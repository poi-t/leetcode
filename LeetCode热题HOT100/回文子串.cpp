/*����һ���ַ�������������Ǽ�������ַ������ж��ٸ������Ӵ������в�ͬ
��ʼλ�û����λ�õ��Ӵ�����ʹ������ͬ���ַ���ɣ�Ҳ�ᱻ������ͬ���Ӵ���*/

class Solution {
public:
    int countSubstrings(string s) {
        int num = 0,  n = s.size(), l = 0, r = 0; 
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j <= 1; ++j)
            {
                l = i;
                r = i + j;
                while(l >= 0 && r < n && s[l--] == s[r++])
                {
                    ++num;
                }
            }
        }
        return num;
    }
}; 
