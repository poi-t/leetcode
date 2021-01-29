/*����һ������ n ������������nums���ж�?nums���Ƿ��������Ԫ�� a��b��c ��
ʹ��?a + b + c = 0 �����ҳ����к�Ϊ 0 �Ҳ��ظ�����Ԫ�顣*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int a = 0; a < n; ++a)
        {
            if(a > 0 && nums[a] == nums[a-1]) continue;//�����ظ� 
            int res = -nums[a], c = n-1;
            for(int b = a + 1; b < n; ++b)
            {
                if(b > a + 1 && nums[b] == nums[b-1]) continue;////�����ظ� 
                while(c > b && nums[b] + nums[c] > res) --c;
                if(b == c) break;
                if(nums[b] + nums[c] == res) ans.push_back({nums[a],nums[b],nums[c]});
            }
        }
        return ans;
    }
};

