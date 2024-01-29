//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int safe(vector<int>&v,int k,int c)
  {
     if(v.size()==1)
     {
         return v[0];
     }
     c=(c+k)%v.size();
     v.erase(v.begin()+c);
     safe(v,k,c);
     
  }
    int safePos(int n, int k) {
        // code here
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(i);
        }
        int c=0;
        int s;
        s=safe(ans,k-1,c);
        return s;

    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends