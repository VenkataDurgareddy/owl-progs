//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void para(int oc,int cc,vector<string>&ans,int n,string&s)
    {
        if(oc==n and cc==n)
        {
            ans.push_back(s);
            return;
        }
        if(oc<n)
        {
            s=s+'(';
            para(oc+1,cc,ans,n,s);
            s=s.substr(0,s.length()-1);
        }
        if(cc<oc)
        {
            s=s+')';
            para(oc,cc+1,ans,n,s);
            s=s.substr(0,s.length()-1);
           
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        int oc=0,cc=0;
        string s="";
        para(oc,cc,ans,n,s);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends