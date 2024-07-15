class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    int sum=nums[i]+nums[j]+nums[k];
                    int m=abs(sum-target);
                    if(ans>m)
                    {
                        ans=m;
                        result=sum;
                    }
                }
            }
        }
        return result;
        
    }
};