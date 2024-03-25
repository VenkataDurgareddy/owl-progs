class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=abs(nums[i])-1;
            if(nums[k]<0)
            {
                ans.push_back(abs(nums[i]));
            }
            nums[k]=-nums[k];


        }
        return ans;
    }
};