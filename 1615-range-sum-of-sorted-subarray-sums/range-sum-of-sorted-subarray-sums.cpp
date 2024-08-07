class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>sum;
        for(int i=0;i<n;i++)
        {
            int sume=0;
            for(int j=i;j<n;j++)
            {
                    sume+=nums[j];
                   sum.push_back(sume);
            }
        }
        sort(sum.begin(),sum.end());
        long long mod=1e9+7;
        long long int finalans=0;
       for(int i=left-1;i<=right-1;i++)
       {
            finalans+=(sum[i])%mod;
       }
        return finalans%mod;
    }
};