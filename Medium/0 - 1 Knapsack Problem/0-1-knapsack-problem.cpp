//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1000][1000];
    long long ks(int w,int wt[],int val[],int n,int i)
    {
        if(i>=n)
        {
            // if(w>=wt[i])
            // {
            //     return val[i];
            // }
            return 0;
        }
        if(dp[i][w]!=-1) return dp[i][w];
        int take=INT_MIN;
        if(w>=wt[i])
        {
            take=val[i]+ks(w-wt[i],wt,val,n,i+1);
        }
        int nottake=ks(w,wt,val,n,i+1);
        return dp[i][w]=max(take,nottake);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int i=0;
       int k=W;
       memset(dp,-1,sizeof(dp));
       int ans=ks(W,wt,val,n,i);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends