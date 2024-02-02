#include<bits/stdc++.h>
using namespace std;
int dp[10000001];
int  numcoins(int rupees,vector<int>&v)
{
    if(rupees==0)
    {
        return 0;
    }
    int mine=INT_MAX;
    if(dp[rupees]!=-1) return dp[rupees];
    for(int i=0;i<v.size();i++)
    {
        if(rupees>=v[i])
        {
            mine =min(mine,1+numcoins(rupees-v[i],v));
        }
        
    }
    return dp[rupees]=mine;
}
int main()
{
    int rupees=15;
    vector<int>v={1,7,10};
    int count=0;
    memset(dp,-1,sizeof(dp));
    cout<<numcoins(rupees,v);
}
