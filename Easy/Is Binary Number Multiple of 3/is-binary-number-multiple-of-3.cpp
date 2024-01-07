//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int oddcount=0;
	    int evencount=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='1')
	        {
	            if(i%2==0)
	            {
	                evencount++;
	            }
	            else{
	                oddcount++;
	            }
	        }
	    }
	    return (oddcount-evencount)%3==0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends