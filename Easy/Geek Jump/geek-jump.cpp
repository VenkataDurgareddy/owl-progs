//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    int me(vector<int>&arr,int n,int ind,vector<int>&dp)
    {
        if(ind>=n-1)
        {
            return 0;
        }
        if(dp[ind]!=-1)return dp[ind];
        int onestep=abs(arr[ind]-arr[ind+1])+me(arr,n,ind+1,dp);
        int twostep=INT_MAX;
        if(ind+2<n)
        {
           twostep=abs(arr[ind]-arr[ind+2])+me(arr,n,ind+2,dp);
        }
        return dp[ind]=min(onestep,twostep);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int>dp(n+1,-1);
        int ans=me(height,n,0,dp);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends