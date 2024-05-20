//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long power(int N, int R)
    {
        long long res = 1;
        long long M = 1e9 + 7;
        long long base = N;
        
        while (R > 0)
        {
            if (R & 1) 
            {
                R=R-1;
                res = (res * base) % M;
            }
            else{
            base = (base * base) % M; 
            R = R >> 1; 
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends