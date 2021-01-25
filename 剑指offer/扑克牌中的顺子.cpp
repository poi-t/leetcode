/*���˿����������5���ƣ��ж��ǲ���һ��˳�ӣ�����5�����ǲ��������ġ�2��10Ϊ����
����AΪ1��JΪ11��QΪ12��KΪ13������С��Ϊ 0 �����Կ����������֡�A ������Ϊ 14��*/

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int tmax = 0, tmin = 14;
        set<int> s;
        for(int i = 0; i < 5; ++i)
        {
            if(nums[i] == 0) continue;
            tmax = max(tmax, nums[i]);
            tmin = min(tmin, nums[i]);
            if(s.count(nums[i])) return false;
            s.insert(nums[i]);
        }
        return (tmax - tmin) < 5;//����˳�Ӳ����Ϊ4���ɽ�����Ϊ����ȱ�ٻ��������� 
    }
};
