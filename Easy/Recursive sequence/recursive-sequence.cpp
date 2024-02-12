//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
long long val=1;
long long mod=1e9+7;
    long long printseq(int i,int num,int sum)
    {
        if(i==0)
        {
             sum=(sum+num)%mod;
            return sum;
        }
        num=(num*val)%mod;
        val++;
        printseq(i-1,num,sum);
        
    }
    long long sequence(int n){
        // code here
        long long ans=0;
        long long val=0;
        long long currsum=0;
        for(int i=1;i<=n;i++)
        {
            ans=printseq(i,1,0);
            // cout<<ans<<endl;
            // cout<<"=========="<<endl;
            currsum+=ans;
            //cout<<currsum<<endl;
        }
        return currsum%mod;
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends