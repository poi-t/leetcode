//����һ��Ӣ�ľ��ӣ���ת�����е��ʵ�˳�򣬵��������ַ���˳�򲻱䡣Ϊ������������ź���ͨ��ĸһ������

class Solution {
public:
    string reverseWords(string s) {
        string str;
        if(s.empty()) return str;
        int i, j = s.size() - 1;
        for( ; j >= 0; --j)
        {
            if(s[j] != ' ')
            {
                i = j;
                while(i >=0 && s[i] != ' ')
                    --i;
                for(int k = i + 1; k <= j; ++k)
                    str.push_back(s[k]);
                str.push_back(' ');
                j = i;
            }
        }
        if(str.size() > 0) str.pop_back();
        return str;
    }
};
