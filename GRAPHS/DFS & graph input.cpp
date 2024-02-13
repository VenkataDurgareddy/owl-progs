#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<bool>vis,map<int,vector<int>>m)
{
    vis[node]=false;
    cout<<node;
    for(auto it:m[node])
    {
            if(vis[it])
            {
                DFS(it,vis,m);
            }
    }
}
int main()
{
    int n;
    cin>>n;
    map<int,vector<int>>m;
    vector<bool>vis(n,true);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        m[a].push_back(b);
    }
    DFS(2,vis,m);
    // for(auto it:m)
    // {
    //     cout<<it.first<<"==";
    //     for(auto it1:it.second)
    //     {
    //         cout<<it1<<" ";
    //     }
    //     cout<<endl;
    // }
}
