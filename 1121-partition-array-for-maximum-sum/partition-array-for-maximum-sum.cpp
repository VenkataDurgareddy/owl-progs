class Solution {
public:
    int dp[500];
    int frontpartition(vector<int>&arr,int k,int ind,int n)
    {
        if(ind>=n)
        {
            return 0;
        }
        if(dp[ind]!=-1) return dp[ind];
        int len=0,maxi=INT_MIN,maxsum=INT_MIN;
        for(int j=ind;j<min(n,ind+k);j++)
        {
            len++;
            maxi=max(maxi,arr[j]);
            int sum=(len*maxi)+frontpartition(arr,k,j+1,n);
            maxsum=max(maxsum,sum);
        }
        return dp[ind]=maxsum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int ans=0;
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        ans=frontpartition(arr,k,0,n);
        return ans;
    }
};