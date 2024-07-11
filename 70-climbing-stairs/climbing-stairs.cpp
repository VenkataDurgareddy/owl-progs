class Solution {
public:
    int dp[46];
    int climb(int n)
    {
        if(dp[n]!=-1)return dp[n];
        if(n<2)return 1;
        return dp[n]=climb(n-1)+climb(n-2);
    }
    int climbStairs(int n) {
         memset(dp,-1,sizeof(dp));
        int number=climb(n);
        return number;
    }
};