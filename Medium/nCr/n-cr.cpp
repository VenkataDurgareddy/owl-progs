//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     long long N = 1001;
    long long mod = 1e9 + 7;
    vector<long long> fact;
    vector<long long> invfact;

    long long biexp(long long a, long long b) {
        long long res = 1;
        while (b != 0) {
            if (b & 1) {
                b -= 1;
                res = (res * a) % mod;
            } else {
                b /= 2;
                a = (a * a) % mod;
            }
        }
        return res;
    }

    void prefact() {
        fact.resize(N);
        invfact.resize(N);
        fact[0] = 1;
        invfact[0] = 1;
        for (int i = 1; i < N; i++) {
            fact[i] = (fact[i - 1] * i) % mod;
            invfact[i] = biexp(fact[i], mod - 2);
        }
    }

    int nCr(int n, int r) {
        prefact();
        if(n<r)
        {
            return 0;
        }
        long long ans = (fact[n] % mod) * ((invfact[r] * invfact[n - r]) % mod) % mod;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends