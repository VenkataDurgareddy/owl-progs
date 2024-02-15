class Solution {
public:
    void csum(vector<int>nums,int target,int sum,vector<vector<int>>&ans,int i,vector<int>r)
    {
        //base case
        if(sum==target)
        {
            ans.push_back(r);
            return;
        }
        if(i>=nums.size() or sum>target)
        {
            return;
        }
        //recursive case
        while(i<nums.size())
        {
            r.push_back(nums[i]);
            csum(nums,target,sum+nums[i],ans,i,r);
            i++;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>r;
        csum(candidates,target,0,ans,0,r);
        return ans;
    }
};