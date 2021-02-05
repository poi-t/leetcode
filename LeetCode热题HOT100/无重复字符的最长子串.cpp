//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
	    unordered_set<char> st;
	    int left = 0, right = 0, n = s.size();
	    while(right < n)
	    {
		    while(right < n && !st.count(s[right]))
            {
                st.insert(s[right++]);
            }
		    ans = max(ans, right-left);
            st.erase(s[left++]);
	    }
	    return ans;
    }
};
