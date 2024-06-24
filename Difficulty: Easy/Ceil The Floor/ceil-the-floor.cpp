//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    int low=0,high=n-1;
    int low2=0,high2=n-1;
    int floorval=-1;
    int ceilval=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=x)
        {
            floorval=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    while(low2<=high2)
    {
        int mid=(low2+high2)/2;
        if(arr[mid]>=x)
        {
            ceilval=arr[mid];
            high2=mid-1;
        }
        else{
            low2=mid+1;
        }
    }
    return {floorval,ceilval};
}