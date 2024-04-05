//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code 
        pair<int,int>meetings[n];
        for(int i=0;i<n;i++)
        {
            meetings[i]=make_pair(end[i],start[i]);
        }
        sort(meetings,meetings+n);
        int maximummeetings=1;
        int currmeeting=meetings[0].first;
        for(int i=1;i<n;i++)
        {
            if(currmeeting<meetings[i].second)
            {
                maximummeetings++;
                currmeeting=meetings[i].first;
            }
        }
        return maximummeetings;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends