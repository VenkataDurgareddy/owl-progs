class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>m1;
       map<int,int>m2;
       for(auto it:nums1)m1[it]++;
       for(auto it:nums2)m2[it]++;
       vector<int>first;
       vector<int>second;
       vector<vector<int>>ans;
       for(auto it:m1)
       {
          if(m2[it.first]==0)
          {
            first.push_back(it.first);
          }
       }
       for(auto it:m2)
       {
          if(m1[it.first]==0)
          {
            second.push_back(it.first);
          }
       }
       return {first,second};
    }
};