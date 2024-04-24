class Solution {
public:
    int dp[38];
    int tri(int n)
    {
        if(dp[n]!=-1)return dp[n];
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        return dp[n]=tri(n-1)+tri(n-2)+tri(n-3);
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
       return tri(n);
    }
};