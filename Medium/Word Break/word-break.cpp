//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int wordbreak(map<string,int>&m,string &s,int ind)
    {
        if(ind==s.size())return 1;
        int c=0;
        string ss="";
        for(int i=ind;i<s.size();i++)
        {
            ss=ss+s[i];
            if(m.find(ss)!=m.end())
            {
                c=max(c,wordbreak(m,s,i+1));
            }
        }
        return c;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        map<string,int>m;
        for(auto it:dictionary)
        {
            m[it]++;
        }
        int ans=wordbreak(m,s,0);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends