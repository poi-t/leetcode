//����ַ������ҳ�һ����Ĳ������ظ��ַ������ַ��������������ַ����ĳ��ȡ�

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;//��¼��ĸ�����ֵ�λ�� 
        int ans = 0, left = 0, right = 0, n = s.length();
        while(right < n)
        {
            if(mp.find(s[right]) != mp.end())
            {
                left = max(mp[s[right]]+1, left);
            }
            mp[s[right]] = right;
            ++right;
            ans = max(ans, right-left);
        }
        return ans;
    }
};
