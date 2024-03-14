class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int>m;
        m[0]=1;
        int prefixsum=0;
        int cnt=0;
        for(auto it:nums)
        {
            prefixsum+=it;
            int k=prefixsum-goal;
            cnt+=m[k];
            m[prefixsum]++;
        }
        return cnt;
    }
};