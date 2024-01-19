//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        long long mod=1e9+7;
        if(n<=3)
        {
            return n;
        }
        long long int a=2;
        long long int b=3;
        long long int c=a+b;
        for(int i=0;i<n-3;i++)
        {
            c=(a+b)%mod;
            a=b;
            b=c;
        }
        return c%mod;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends