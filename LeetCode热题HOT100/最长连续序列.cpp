//����һ��δ������������� nums ���ҳ���������������У���Ҫ������Ԫ����ԭ�������������ĳ��ȡ�
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (const int& i : nums) 
		{
            s.insert(i);
        }
        int ans = 0;
        for (const int& i : s) 
		{
            if (!s.count(i - 1)) 
			{
                int num = i, res = 1;
                while (s.count(num + 1)) 
				{
                    ++num;
                    ++res;
                }

                ans = max(ans, res);
            }
        }
        return ans;
    }
};
