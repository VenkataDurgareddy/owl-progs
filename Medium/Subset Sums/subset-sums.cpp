//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sum(vector<int>&arr,int N,vector<int>&ans,int ind,int s)
    {
        if(ind>=arr.size())
        {
            ans.push_back(s);
            return;
        }
        s+=arr[ind];
        sum(arr,N,ans,ind+1,s);
        s=s-arr[ind];
        sum(arr,N,ans,ind+1,s);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int ind=0;
        int s=0;
        sum(arr,N,ans,ind,s);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends