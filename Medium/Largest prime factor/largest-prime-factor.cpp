//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
         int maxe=INT_MIN;
        for(int i=2;i*i<=N;i++)
        {
           while(N%i==0)
           {
               maxe=max(maxe,i);
               N=N/i;
           }
        }
        if(N>=2)
        {
            maxe=max(maxe,N);
        }
        return maxe;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends