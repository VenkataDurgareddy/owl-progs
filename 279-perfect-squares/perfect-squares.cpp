class Solution {
public:
 int perfect(vector<int>& dp, vector<int>& v, int n) {
        if (dp[n] != -1)
            return dp[n];
        
        int result = n;
        for (int i = 0; i < v.size(); i++) {
            if (n - v[i] >= 0) {
                result = min(result, 1 + perfect(dp, v, n - v[i]));
            }
        }
       return dp[n] = result;
    }
    int numSquares(int n) {
        vector<int>v;
       vector<int>dp(n+1,-1);
        for(int i=1;i*i<=n;i++)
        {
            v.push_back(i*i);
        }
        vector<int>ans;
        int sum=0;
        int i=0;
        int mine=INT_MAX;
        int anse=perfect(dp,v,n);
        return anse;
    }
};