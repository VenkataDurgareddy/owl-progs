#include<bits/stdc++.h>
using namespace std;
 int dp[100001];
int frogjump(int ind,vector<int>&v,int n,int k)
{
    if(ind==n-1)
    {
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int ans=INT_MAX;
   for(int i=1;i<=k;i++)
   {
       if((ind+i)<=n-1)
       {
        ans=min(ans,abs(v[ind]-v[ind+i])+frogjump(ind+i,v,n,k));
        
       }
   }
    return dp[ind]=ans;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    memset(dp,-1,sizeof(dp));
    int ans=frogjump(0,v,n,k);
    cout<<ans;
}
