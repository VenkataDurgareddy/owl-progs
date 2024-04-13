//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long n) {
        // code 
        string binary="";
        for(int i=0;i<32;i++)
        {
            if(n&(1<<i))
            {
                binary+='1';
            }
            else{
                binary+='0';
            }
        }
        long long ans=0;
        int pos=0;
        for(int i=31;i>=0;i--)
        {
          int k=binary[pos]-'0';
          ans+=k*pow(2,i);
          pos++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends