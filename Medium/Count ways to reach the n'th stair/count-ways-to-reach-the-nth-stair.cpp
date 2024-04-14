//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int mod=1e9+7;
int dp[100001];
class Solution {
    long long countways(int n) {
        if(dp[n]!=-1) return dp[n];
        if (n == 0) return 1; // Base case, there's one way to reach the 0th stair
        if (n < 0) return 0;  // Base case, if n becomes negative, no way to reach
        long long onestep = 0, twostep = 0;
        if (n - 1 >= 0) {
            onestep = countways(n - 1);
        }
        if (n - 2 >= 0) {
            twostep = countways(n - 2);
        }
        return dp[n]=(onestep + twostep)%mod;
    }
public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        memset(dp,-1,sizeof(dp));
        long long ways = countways(n);
        return ways%mod;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends