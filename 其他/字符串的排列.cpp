/*���������ַ��� s1 �� s2��дһ���������ж� s2 �Ƿ���� s1 �����С�
���仰˵����һ���ַ���������֮һ�ǵڶ����ַ������Ӵ���*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> res1(26, 0), res2(26, 0);
        int n1 = s1.length(), n2 = s2.length(), word = 0;
        if(n1 > n2) return false;
        for(char s : s1)
        {
            if(! res1[s-'a']++) ++word;
        }

        int left = 0, right = n1, t = 0;
        for(int i = left; i < right; ++i)
        {
            t = s2[i] - 'a';
            if(res1[t] > 0 && ++res2[t] == res1[t])
            {
                --word;
            } 
        }
        if(word == 0) return true;
        while(right < n2)
        {
            t = s2[left] - 'a';
            if(res1[t] > 0 && res2[t]-- == res1[t])
            {
                ++word;
            }
            t = s2[right] - 'a';
            if(res1[t] > 0 && ++res2[t] == res1[t]) --word;
            if(word == 0) return true;
            ++left;
            ++right;
        }
        return false;
    }
};
