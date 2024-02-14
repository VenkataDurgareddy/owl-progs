class Solution {
public:
    int findpathsum(vector<int>&nums,int target,int i,int sum)
    {
        if (i == nums.size()) {
            return sum == target ? 1 : 0;
        }
        int plus=findpathsum(nums,target,i+1,sum+nums[i]);
        int neg=findpathsum(nums,target,i+1,sum-nums[i]);
        return plus+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
       int ans=findpathsum(nums,target,0,0);
       return ans;
    }
};