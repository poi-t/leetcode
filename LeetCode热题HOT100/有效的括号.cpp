/*����һ��ֻ���� '('��')'��'{'��'}'��'['��']'���ַ��� s ���ж��ַ����Ƿ���Ч��
��Ч�ַ��������㣺
�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�*/

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n == 0) return true;
        if(n % 2 == 1) return false;
        unordered_map<char, char> mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        stack<char> sk;
        for(int i = 0; i < n; ++i)
        {
            char t = s[i];
            if(t == '(' || t == '[' || t == '{') sk.push(t);
            else if(sk.empty() || mp[sk.top()] != t) return false;
            else sk.pop();
        }
        if(sk.size() != 0) return false;
        return true;
    }
};
