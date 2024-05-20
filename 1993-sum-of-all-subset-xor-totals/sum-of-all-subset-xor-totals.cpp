class Solution {
public:
     void subset(vector<int>nums,int ind,int n,vector<vector<int>>&subsets,vector<int>&v)
     {
        if(ind>=n)
        {
            subsets.push_back(v);
            return ;
        }
        v.push_back(nums[ind]);
        subset(nums,ind+1,n,subsets,v);
         v.pop_back();
        subset(nums,ind+1,n,subsets,v);

     }
    int subsetXORSum(vector<int>& nums) {
      int ans=0;
      vector<vector<int>>subsets;
      vector<int>v;
      subset(nums,0,nums.size(),subsets,v);
      for(auto it:subsets)
      {
        int curr=0;
        for(auto it1:it)
        {
            curr=curr^it1;
        }
        ans+=curr;
      }
      return ans;
    }
};