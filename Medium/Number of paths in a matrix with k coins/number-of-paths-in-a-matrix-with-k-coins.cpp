//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int dp[101][101][101];
    long long path(int n, int k, vector<vector<int>>& arr, int i, int j, int sum) {
        if (i >= n || j >= n || sum>k) {
            return 0;
        }
        if (i == n - 1 && j == n - 1) {
            if (sum + arr[i][j] == k) {
                return 1;
            }
            return 0;
        }
         if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        long long down = path(n, k, arr, i + 1, j, sum + arr[i][j]);
        long long right = path(n, k, arr, i, j + 1, sum + arr[i][j]);

        return dp[i][j][sum]=down + right;
    }

    long long numberOfPath(int n, int k, vector<vector<int>>& arr) {
        memset(dp,-1,sizeof(dp));
        return path(n, k, arr, 0, 0, 0);
    }
};



//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends