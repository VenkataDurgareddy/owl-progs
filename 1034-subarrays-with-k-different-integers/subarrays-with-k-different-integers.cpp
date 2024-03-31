class Solution {
public:
    int atmost(vector<int>nums,int k)
    {
        map<int,int>m;
        int right=0;
        int left=0;
        int ans=0;
        while(right<nums.size())
        {          
            m[nums[right]]++;
            while(m.size()>k and left<=right)
            {
               
                m[nums[left]]--;
               if(m[nums[left]]==0)
               {
                m.erase(nums[left]);
               }
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atmost(nums,k)-atmost(nums,k-1);
    }
};