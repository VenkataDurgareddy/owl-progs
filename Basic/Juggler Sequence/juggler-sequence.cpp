//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void JS(int a,vector<int>&v)
    {
        if(a==1)
        {
            v.push_back(1);
            return;
        }
        if(a&1)
        {
            v.push_back(a);
           a=pow(a,1.5) ;
        }
        else{
            v.push_back(a);
            a=pow(a,0.5);
        }
       
        JS(a,v);
    }
    vector<int> jugglerSequence(int N){
        // code here
        vector<int>v;
        JS(N,v);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends