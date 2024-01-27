//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int jos(vector<int>&v1,int k,int c)
    {
       if(v1.size()==1)
       {
           return v1[0];
       }
      c=(c+k)%v1.size();    
      v1.erase(v1.begin()+c);
      return jos(v1,k,c);
       
    }
    int josephus(int n, int k)
    {
       //Your code here
       vector<int>v;
       for(int i=1;i<=n;i++)
       {
           v.push_back(i);
       }
       int c=0;
       int ans=jos(v,k-1,c);
       return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends