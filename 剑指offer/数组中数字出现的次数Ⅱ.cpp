//��һ������ nums �г�һ������ֻ����һ��֮�⣬�������ֶ����������Ρ����ҳ��Ǹ�ֻ����һ�ε����֡�

/*���ڳ������ε����֣���������λ���ֵĴ�������3�ı�����
*ͳ���������ֵĸ�������λ�ĳ��ִ���������3���࣬���Ϊֻ����һ�ε�����*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < 32; ++i)
        {
            int res = 0;
            for(int n : nums)
            {
                if(n & (1 << i)) ++res;
            }
            if(res % 3 == 1) ans ^= (1 << i);
        }
        return ans;
    }
};
