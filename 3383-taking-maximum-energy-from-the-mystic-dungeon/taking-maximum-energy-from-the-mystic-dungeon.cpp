class Solution {
public:
    int minene(vector<int>&energy,int k,int ind,int n,vector<int>&dp)
    {

        if(ind>=n)
        {
            return 0;
        }
        if(dp[ind]!=INT_MIN)return dp[ind];
        int take=energy[ind]+minene(energy,k,ind+k,n,dp);
        return dp[ind]=take;
        
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int ans=INT_MIN;
        vector<int>dp(n,INT_MIN);
        for(int i=0;i<n;i++)
        {
         ans=max(ans,minene(energy,k,i,n,dp));
        }
        return ans;
    }
};