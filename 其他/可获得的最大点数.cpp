/*���ſ��� �ų�һ�У�ÿ�ſ��ƶ���һ����Ӧ�ĵ�������������������cardPoints������ÿ���ж���
����Դ��еĿ�ͷ����ĩβ��һ�ſ��ƣ����������������k�ſ��ơ���ĵ����������õ����е�����
���Ƶĵ���֮�͡�����һ���������� cardPoints ������ k�����㷵�ؿ��Ի�õ���������*/
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), num = 0, left = k - 1;
        for(int i = 0; i < k; ++i)
        {
            num += cardPoints[i];
        }
        int ans = num;
        for(int i = 0; i < k; ++i)
        {
            num += (cardPoints[n - i - 1] - cardPoints[left--]);
            ans = max(ans, num);
        }
        return ans;
    }
};
