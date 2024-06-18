class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        for(auto it:m)
        {
            if(it.second.size()>=2)
            {
               for(int i=0;i<it.second.size();i++)
               {
                for(int j=i+1;j<it.second.size();j++)
                {
                    if(abs(it.second[i]-it.second[j])<=k)return true;
                }
               }
            }
        }
        return false;
    }
};