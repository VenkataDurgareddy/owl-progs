class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int ans=0;
        if(nums[0]==1 and nums[nums.size()-1]==nums.size())
        {
            return 0;
        }
        while(nums[0]!=1)
        {
           for(int i=0;i<nums.size()-1;i++)
           {
               if(nums[i+1]==1)
               {
                   ans++;
                   swap(nums[i],nums[i+1]);
               }
           }
        }
        int k=nums.size();
         while(nums[k-1]!=k)
        {
           for(int i=0;i<k-1;i++)
           {
               if(nums[i]==k)
               {
                   ans++;
                   swap(nums[i],nums[i+1]);
               }
           }
        }
        return ans;
    }
};