//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gf(int N,vector<long long int>&v)
    {
       if(N==1)
       {
           v.push_back(0);
           return;
       }
       if(N==2)
       {
           v.push_back(0);
           v.push_back(1);
           return;
       }
       gf(N-1,v);
       long long int z=v[v.size()-2]*v[v.size()-2]-v[v.size()-1];
       v.push_back(z);
       
    }
    void gfSeries(int N)
    {
        // Write Your Code here
        vector<long long int>v;
        gf(N,v);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends