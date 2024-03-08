class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        int maxfreq=INT_MIN;
        for(auto it:nums)
        {
            m[it]++;
            maxfreq=max(maxfreq,m[it]);
        }
        int cnt=0;
        for(auto it:nums)
        {
            if(m[it]==maxfreq)
            {
                cnt++;
            }
        }
        return cnt;
    }
};