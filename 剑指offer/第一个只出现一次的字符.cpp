//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո� s ֻ����Сд��ĸ��

class Solution {
public:
    char firstUniqChar(string s) {
        int n = s.length();
        vector<int> letter(26, 0);
        for(char word : s)
        {
            letter[word - 'a'] += 1;
        }
        for(char word : s)
        {
            if(letter[word - 'a'] == 1) return word;
        }
        return ' ';
    }
};
