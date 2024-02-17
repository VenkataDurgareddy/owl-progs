class Solution {
public:
    int dp[101][101];
    int path(int m,int n,vector<vector<bool>>&vis,int i,int j)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        int right=0;
        int down=0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(j+1<n && vis[i][j+1]==true)
        {
            vis[i][j]=false;
            right=path(m,n,vis,i,j+1);
            vis[i][j]=true;
        }
        if(i+1<m && vis[i+1][j]==true)
        {
            vis[i][j]=false;
            down=path(m,n,vis,i+1,j);
            vis[i][j]=true;
        }
        return dp[i][j]=right+down;
    }
    int uniquePaths(int m, int n) {
         vector<vector<bool>>vis(m,vector<bool>(n,true));
         memset(dp,-1,sizeof(dp));
        int ans=path(m,n,vis,0,0);
        return ans;
    }
};