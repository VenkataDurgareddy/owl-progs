class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n);
        vector<int>rightsum(n);
        leftsum[0]=nums[0];
        rightsum[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            leftsum[i]=leftsum[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            rightsum[i]=rightsum[i+1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(leftsum[i]==rightsum[i])return i;
        }
        return -1;
    }
};