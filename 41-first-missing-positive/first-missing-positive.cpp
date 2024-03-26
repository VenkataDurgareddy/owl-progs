class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                return i;
            }
        }
        return n<0?1:n+1;
    }
};