class Solution {
public:
    void subset(vector<int>&nums,vector<vector<int>>&ans,int ind,vector<int>&v,int n)
    {
        if(ind>=n)
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        subset(nums,ans,ind+1,v,n);
        v.pop_back();
        subset(nums,ans,ind+1,v,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        subset(nums,ans,0,v,nums.size());
        return ans;
    }
};