//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void findnumbers(vector<int>& arr, int sum, vector<vector<int>>& ans, vector<int>& r, int i) {
        if (sum == 0) {
            ans.push_back(r);
            return;
        }
        while (i < arr.size() && sum - arr[i] >= 0) {
            r.push_back(arr[i]);
            findnumbers(arr, sum - arr[i], ans, r, i);
            i++;
            r.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& A, int B) {
        vector<vector<int>> ans;
        vector<int> r;
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        int i = 0;
        findnumbers(A, B, ans, r, i);
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
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends