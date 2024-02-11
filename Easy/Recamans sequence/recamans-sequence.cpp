//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int>v(n);
        v[0]=0;
        map<int,int>m;
        m[0]++;
        for(int i=1;i<n;i++)
        {
            int ele=v[i-1]-i;
            int ele2=v[i-1]+i;
            if(ele>0 and m[ele]==0)
            {
                v[i]=ele;
                m[ele]++;
            }
            else{
                v[i]=ele2;
                m[ele2]++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends