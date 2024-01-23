//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
 long long N = 1001;
long long mod = 1e9 + 7;
    vector<long long> fact;
    vector<long long> invfact;
long long int  biexp(long long int a,long long int b)
{
    long long int r=1;
    while(b!=0)
    {
        if(b&1)
        {
            b=b-1;
            r=(r*a)%mod;
        }
        else{
            b=b/2;
            a=(a*a)%mod;
        }
    }
    return r;
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

    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        prefact();
        vector<long long>ans;
        for(int i=1;i<=n;i++)
        {
          long long k = (fact[n-1] % mod) * ((invfact[i-1] * invfact[(n-1) - (i-1)]) % mod) % mod;
           k=k%mod;
           ans.push_back(k);
        }
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends