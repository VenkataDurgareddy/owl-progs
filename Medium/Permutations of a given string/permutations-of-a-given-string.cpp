//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void permute(vector<string>&a,string ds,string s1,vector<bool>&freq)
    {
        if(ds.length()==s1.length() and find(a.begin(),a.end(),ds)==a.end())
        {
            a.push_back(ds);
            return ;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(!freq[i])
            {
                ds=ds+s1[i];
                freq[i]=true;
                permute(a,ds,s1,freq);
                ds=ds.substr(0,ds.size()-1);
                freq[i]=false;
            }
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>finalans;
		    string ds;
	        vector<bool>fre(S.length(),false);
		    permute(finalans,ds,S,fre);
		    sort(finalans.begin(),finalans.end());
		    return finalans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends