#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int  wine(int i,int j,vector<int>&v,int n)
{
    if(i==j)
    {
        return (n-(j-i))*v[i];
    }
    if(dp[i][j]!=-1)return dp[i][j];
    int left=(n-(j-i))*v[i]+wine(i+1,j,v,n);
    int right=(n-(j-i))*v[j]+wine(i,j-1,v,n);
    return dp[i][j]=max(left,right);
}
int main()
{
    vector<int>v={2,3,1};
    memset(dp,-1,sizeof(dp));
    cout<<wine(0,2,v,3);
    
}
