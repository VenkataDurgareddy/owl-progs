class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int i=0;
            int j=0;
            int n=nums.size();
            int sum=0;
            int msl=INT_MAX;
            bool flag=true;
            while(j<n)
            {
                sum+=nums[j];
                while(sum>=target)
                {
                    flag=false;
                    sum=sum-nums[i];
                    msl=min(msl,(j-i)+1);
                    i++;
                }
                j++;
            }
            if(flag==true)return 0;
            return msl;
    }
};