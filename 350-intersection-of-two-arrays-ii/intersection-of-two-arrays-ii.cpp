class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto it:nums2)
        {
            mp[it]++;
        }
        vector<int>v;
        for(auto it:nums1)
        {
            if(mp[it]>0)
            {
                v.push_back(it);
                mp[it]--;
            }
        }
        return v;
    }
};