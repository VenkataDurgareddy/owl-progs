//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> v, int n, int k, int x) {
        // code here
      // int lower = lower_bound(v.begin(), v.end(), x)-v.begin();
       int  upper = upper_bound(v.begin(), v.end(), x)-v.begin();
      vector<int>ans;
        int lower = upper-1;
        if(v[lower]==x)lower--;
          int curr1=0;
          int curr2=0;
     while((lower>=0 and upper<n)and k!=0 )
     {
        
             curr1=abs(x-v[lower]);
    
             curr2=abs(x-v[upper]);
         if(curr1<curr2)
         {
             ans.push_back(v[lower]);
             lower--;
             
         }
         else if(curr2>curr1)
         {
             ans.push_back(v[upper]);
             upper++;
         }
         else{
           if(v[lower]>v[upper])
           {
               ans.push_back(v[lower]);
               lower--;
           }
           else{
               ans.push_back(v[upper]);
               upper++;
           }
         }
         k--;
     }
     if(k!=0)
     {
         while(lower>=0 and k!=0)
         {
             ans.push_back(v[lower]);
             k--;
             lower--;
         }
         while(upper<n and k!=0)
         {
             ans.push_back(v[upper]);
             k--;
             upper++;
         }
     }
    return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends