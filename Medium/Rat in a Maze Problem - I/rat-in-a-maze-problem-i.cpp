//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void rat(vector<vector<int>>&m,vector<string>&ans,vector<vector<int>>vis,int i,int j,string s,int n)
    {
        
        if(i==n-1 and j==n-1)
        {
            ans.push_back(s);
            return;
        }
        //downward
        if(i+1<n && !vis[i+1][j] && m[i+1][j]==1)
        {
            vis[i][j]=1;
            rat(m,ans,vis,i+1,j,s+'D',n);
            vis[i][j]=0;
        }
        //left
        if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1)
        {
            vis[i][j]=1;
            rat(m,ans,vis,i,j-1,s+'L',n);
            vis[i][j]=0;
        }
        //right
        if(j+1<n && !vis[i][j+1] && m[i][j+1]==1)
        {
            vis[i][j]=1;
            rat(m,ans,vis,i,j+1,s+'R',n);
            vis[i][j]=0;
        }
        //upward
         if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1)
        {
            vis[i][j]=1;
            rat(m,ans,vis,i-1,j,s+'U',n);
            vis[i][j]=0;
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        string s;
        if(m[0][0]==0)
        {
            return {"-1"};
        }
        rat(m,ans,vis,0,0,s,n);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends