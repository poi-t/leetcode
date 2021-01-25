/*������һ��m��n�еķ��񣬴����� [0,0] ������ [m-1,n-1] ��һ��������
������[0, 0] �ĸ��ӿ�ʼ�ƶ�����ÿ�ο��������ҡ��ϡ����ƶ�һ�񣨲�
���ƶ��������⣩��Ҳ���ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�*/

class Solution {
public:
    int ans = 0;
    void dfs(int i, int j, int m, int n, int k, vector<vector<bool>>& test)
    {
        test[i][j] = false;
        ans += 1;
        //ֻ��Ҫ�Һ����������� 
        if(i+1 < m && is_can(i+1,j,k) && test[i+1][j]) dfs(i+1,j,m,n,k,test);
        if(j+1 < n && is_can(i,j+1,k) && test[i][j+1]) dfs(i,j+1,m,n,k,test);
    }

    bool is_can(int i, int j, int k)//�����жϸø����ܷ��� 
    {
        while(i != 0)
        {
            k -= i%10;
            i /= 10;
        }
        while(j != 0)
        {
            k -= j%10;
            j /= 10;
        }
        if(k < 0) return false;
        else return true;
    }
    int movingCount(int m, int n, int k) {
        if(m == 1 && n== 1) return 1;
        if(k == 0) return 1;
        vector<vector<bool>> test(m, vector<bool>(n,true));
        dfs(0,0,m,n,k,test);
        return ans;
    }
};
