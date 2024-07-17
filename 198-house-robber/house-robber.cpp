class Solution {
public:

    int dp[101];
    int maxrob(vector<int>&nums,int ind)
    {
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int take=maxrob(nums,ind-2)+nums[ind];
        int nottake=maxrob(nums,ind-1);
        return dp[ind]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans=maxrob(nums,nums.size()-1);
        return ans;
    }
};