/*地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人
从坐标[0, 0] 的格子开始移动，它每次可以向左、右、上、下移动一格（不
能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。*/

class Solution {
public:
    int ans = 0;
    void dfs(int i, int j, int m, int n, int k, vector<vector<bool>>& test)
    {
        test[i][j] = false;
        ans += 1;
        //只需要右和下两个方向 
        if(i+1 < m && is_can(i+1,j,k) && test[i+1][j]) dfs(i+1,j,m,n,k,test);
        if(j+1 < n && is_can(i,j+1,k) && test[i][j+1]) dfs(i,j+1,m,n,k,test);
    }

    bool is_can(int i, int j, int k)//用于判断该格子能否走 
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
