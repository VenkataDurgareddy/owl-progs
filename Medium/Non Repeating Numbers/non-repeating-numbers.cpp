//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) 
    {
        // Code here.
        int zerosum=0;
        int onesum=0;
        int mask=0;
        for(auto it:arr)
        {
            mask=mask^it;
        }
        mask=mask&-mask;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]&mask)
        {
            onesum=onesum^arr[i];
        }
        else{
            zerosum=zerosum^arr[i];
        }
    }
    vector<int>v;
    v.push_back(onesum);
    v.push_back(zerosum);
    sort(v.begin(),v.end());
    return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends