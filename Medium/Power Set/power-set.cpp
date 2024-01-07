//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s)
		{
            typedef long long int ll;
        
           
            ll n=s.length();
            ll p=1<<n;
          vector<string>ans;
            for(int i=0;i<p;i++){
                string s1;
                for(int j=0;j<n;j++){
                    if(((i)&(1<<j))!=0){
                        s1+=s[j];
                    }
                }
                if(s1!="")
                ans.push_back(s1);
            }
            sort(ans.begin(),ans.end());
            return ans;
        
};
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends