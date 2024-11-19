class Solution {
public:
    long long maxSum(vector<int>& nums, int m1, int k) {
        int i=0,j=0;
        long long sum=0,ans=0;
        map<int,int>m;
        while(j<nums.size())
        {
            sum+=nums[j];
            m[nums[j]]++;
            while((j-i)+1>k)
            {
               sum-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0)
                {
                    m.erase(nums[i]);
                }
                i++; 
            }
            while(m.size()<m1 && ((j-i)+1)==k)
            {
                sum-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0)
                {
                    m.erase(nums[i]);
                }
                i++;
            }
            if((j-i)+1==k)
            {
                ans=max(ans,sum);
            }
            j++;
        }
        return ans;
    }
};