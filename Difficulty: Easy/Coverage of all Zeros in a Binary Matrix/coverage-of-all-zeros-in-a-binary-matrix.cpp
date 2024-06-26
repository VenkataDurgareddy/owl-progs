//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int left=0,right=0,up=0,down=0;
                if(matrix[i][j]==0)
                {
                    //left
                    if(j>0 && matrix[i][j-1]==1 )
                    {
                        left++;
                    }
                    //right;
                    if(j<m-1 && matrix[i][j+1]==1)
                    {
                        right++;
                    }
                    //up
                    if(i>0 && matrix[i-1][j]==1)
                    {
                        up++;
                    }
                    //down
                    if(i<n-1 && matrix[i+1][j]==1)
                    {
                        down++;
                    }
                }
                ans+=left+right+up+down;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends