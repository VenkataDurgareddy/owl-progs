class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minval=nums[0];
        int cnt=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=minval)
            {
                cnt+=(minval+1)-nums[i];
                minval++;
            }
            else{
                minval=nums[i];
            }
        }
        return cnt;
    }
};