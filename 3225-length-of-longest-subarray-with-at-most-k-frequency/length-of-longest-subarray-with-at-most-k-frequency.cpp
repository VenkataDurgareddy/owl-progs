class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>m;
        int right=0;
        int left=0;
        int ans=INT_MIN;
        while(right<nums.size())
        {
            m[nums[right]]++;
            while(m[nums[right]]>k and left<right)
            {
                m[nums[left]]--;
                left++;
            }
            ans=max(ans,(right-left)+1);
            right++;
        }
        return ans;
    }
};