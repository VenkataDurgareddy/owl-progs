//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


        // code here
        class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
      
        vector<int>v(N+1,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i*i<=N;i++)
        {
            if(v[i]==1)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    v[j]=0;
                }
            }
        }
        vector<int>v1;
        for(int i=M;i<=N;i++)
        {
            if(v[i]==1)
            {
                v1.push_back(i);
            }
        }
        return v1;
    }
};
    

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends