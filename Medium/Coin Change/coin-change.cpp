//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// #include <cstring> // for memset
// using namespace std;

class Solution {
public:
    long long int dp[1002][1002];

    long long int fun(int coins[], int n, int sum, int i) {
        if(sum < 0)
        {
            return 0;
        }
        if (i >= n ) {
            if(sum == 0)
            {
                return 1;
            }
            return 0;
        }
        if(sum == 0)
        {
            return 1;
        }
        if(dp[i][sum] != -1) return dp[i][sum];

        long long int take = 0;
        if (sum - coins[i] >= 0) {
            take = fun(coins, n, sum - coins[i], i);
        }
        long long int notake = fun(coins, n, sum, i + 1);
        
        return dp[i][sum] = take + notake;
    }

    long long int count(int coins[], int N, int sum) {
        long long int ans = 0; // Changed to long long int
        memset(dp, -1, sizeof(dp));
        ans = fun(coins, N, sum, 0);
        return ans;
    }
};





//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends