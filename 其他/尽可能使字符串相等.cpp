/*��������������ͬ���ַ�����s��t����s�еĵ�i���ַ��䵽t�еĵ�i���ַ���Ҫ|s[i]-t[i]|��
��������������Ϊ 0����Ҳ���������ַ���ASCII��ֵ�Ĳ�ľ���ֵ�����ڱ���ַ��������Ԥ��
��maxCost����ת���ַ���ʱ���ܿ���Ӧ��С�ڵ��ڸ�Ԥ�㣬��Ҳ��ζ���ַ�����ת�������ǲ���ȫ�ġ�
�������Խ� s �����ַ���ת��Ϊ���� t �ж�Ӧ�����ַ������򷵻ؿ���ת������󳤶ȡ�*/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, n = s.size(), ans = 0;
        for (int i = 0; i < n; ++i)
        {
            maxCost -= abs(s[i] - t[i]);
            while(maxCost < 0)
            {
                maxCost += abs(s[left] - t[left]);
                ++left;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};
