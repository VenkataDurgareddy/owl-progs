#include<bits/stdc++.h>
using namespace std;
 int dp[10001];
int frogjump(int ind,vector<int>&v,int n)
{
    if(ind==n-1)
    {
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int left=abs(v[ind]-v[ind+1])+frogjump(ind+1,v,n);
    int right=INT_MAX;
    if(ind+2<=n-1)
    {
        right=abs(v[ind]-v[ind+2])+frogjump(ind+2,v,n);
    }
    return dp[ind]=min(left,right);
}
int main()
{
    //int n;
    // cin>>n;
    vector<int>v={10,30,40,20};
    memset(dp,-1,sizeof(dp));
    int ans=frogjump(0,v,4);
    cout<<ans;
}
