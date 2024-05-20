//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#include <algorithm>

class Solution{
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Sort arrival and departure arrays
        std::sort(arr, arr + n);
        std::sort(dep, dep + n);
        
        // Platforms needed at the moment
        int platforms_needed = 1;
        int max_platforms = 1;
        
        int i = 1; // Pointer for arrival array
        int j = 0; // Pointer for departure array
        
        // Iterate through all events (arrivals and departures)
        while (i < n && j < n) {
            // If next event in sorted order is arrival, increment count of platforms needed
            if (arr[i] <= dep[j]) {
                platforms_needed++;
                i++;
            }
            // Else decrement count of platforms needed
            else {
                platforms_needed--;
                j++;
            }
            
            // Update result if needed
            if (platforms_needed > max_platforms) {
                max_platforms = platforms_needed;
            }
        }
        
        return max_platforms;
    }
};



//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends