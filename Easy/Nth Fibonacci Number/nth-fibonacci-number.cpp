//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        int mod=1000000007;
      if(n==1)
      {
          return 0;
      }
      if(n==2)
      {
          return 1;
      }
      int a=1;
      int b=1;
      int c=2;
      int k=3;
      while(k!=n)
      {
          a=b;
          b=c;
          c=(a+b)%mod;
          k++;
      }
      return c%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends