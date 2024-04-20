class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        int zerocnt=0;
        int maxe=INT_MIN;
        int onescnt=0;
        while(j<n)
        {
            if(nums[j]==0)
            {
                zerocnt++;
            }
            if(zerocnt<=1)maxe=max(maxe,((j-i)));
            while(zerocnt>=2 and i<j){
                if(nums[i]==0)
                {
                zerocnt--;
                }
                i++;
            }
            j++;
        }
        return maxe;
    }
};