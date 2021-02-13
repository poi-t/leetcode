//����һ���Ǹ����� k������ k �� 33������������ǵĵ� k �С�

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        ans[0] = ans[rowIndex] = 1;
        for(int i = 1; i <= rowIndex/2; ++i)
        {
            ans[i] = (long)ans[i-1] * (rowIndex - i + 1) / i ;
            ans[rowIndex - i] = ans[i];
        }
        return ans;
    }
};
