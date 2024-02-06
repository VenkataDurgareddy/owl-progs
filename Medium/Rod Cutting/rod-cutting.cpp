//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int dp[100001];
  int cut(int price[],int n)
  {
      //base case
      if(n==0)
      {
          return 0;
      }
      int finalans=INT_MIN;
      if(dp[n]!=-1) return dp[n];
      for(int i=0;i<n;i++)
      {
          int len=i+1;
          int subpart=price[i]+cut(price,n-len);
          finalans=max(finalans,subpart);
      }
      return dp[n]=finalans;
  }
    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        int ans=cut(price,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends