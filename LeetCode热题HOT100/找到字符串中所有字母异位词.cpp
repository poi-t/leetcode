/*����һ���ַ���s��һ���ǿ��ַ���p���ҵ�s��������p����ĸ��λ�ʵ��Ӵ���������Щ�Ӵ�����ʼ������
�ַ���ֻ����СдӢ����ĸ�������ַ���?s?�� p?�ĳ��ȶ������� 20100*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size(), n = p.size();
        if(m == 0 || m < n) return {};
        vector<int> ans;
        vector<int> words(26, 0), wordp(26, 0);
        for(char i : p)
        {
            wordp[i - 'a'] += 1;
        }
        int t = 26;
        for(int i : wordp)
        {
            if(i == 0) --t;
        }
        int right = 0, res = 0;
        while(right < m)
        {
            res = s[right] - 'a';
            words[res]++;
            if(wordp[res] == words[res]) --t;
            if(t == 0) ans.push_back(right - n + 1);
            if(++right >= n)
            {
                res = s[right-n] - 'a';
                if(wordp[res] == words[res]) ++t;
                words[res]--;
            }
        } 
        return ans;
    }
};

