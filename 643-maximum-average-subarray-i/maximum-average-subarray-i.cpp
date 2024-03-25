class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int j=0;
        double avg=0;
        for(int i=0;i<nums.size();i++)
        {
            avg=avg+nums[i];
            if(i>=k-1)
            {
                if(i>=k)
                {
                    avg=avg-nums[j];
                    j++;
                }
                ans=max(ans,avg/k);
            }
        }
        return ans;
    }
};