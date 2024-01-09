class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int j=1;
        int maxe=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           sum=sum+nums[i];
           maxe=max(sum,maxe);
           if(sum<0){
               sum=0;
           }
        }
        return maxe;
    }
};