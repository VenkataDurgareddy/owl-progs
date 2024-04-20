class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>altitudes(n+1);
        altitudes[0]=0;
        int i=1;
        for(int j=0;j<n;j++)
        {
            altitudes[i]=altitudes[i-1]+gain[j];
            i++;
        }
        sort(altitudes.begin(),altitudes.end());
        for(auto it:altitudes)cout<<it<<" ";
        return altitudes[n];
    }
};