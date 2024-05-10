//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void csum(vector<int>&arr,int n,int k,vector<vector<int>>&ans,int ind,vector<int>&v,int sum)
    {
        if(sum==k)
        {
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(i>ind && arr[i]==arr[i-1])continue;
            if(sum+arr[i]<=k)
            {
                v.push_back(arr[i]);
                csum(arr,n,k,ans,i+1,v,sum+arr[i]);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        vector<int>v;
        csum(arr,n,k,ans,0,v,0);
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends