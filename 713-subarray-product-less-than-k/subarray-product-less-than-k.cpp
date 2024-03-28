class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int pro=1;
    int right=0;
    int left=0;
    int ans=0;
    while(right<nums.size())
    {
        pro=pro*nums[right];
        while(pro>=k && left <= right) 
        {
            pro=pro/nums[left];
            left++;
        }
        ans+=right-left+1;
        right++;
    }
    return ans;
    }
};