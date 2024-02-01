//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        set<char>ch;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z'))
            {
                ch.insert(s[i]);
            }
        }
        if(ch.size()==26)
        {
            return 1;
        }
        return 0;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends