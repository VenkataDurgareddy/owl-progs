class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>flip(n,0);
        int time=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i>=k){
                time-=flip[i-k];
            }
            if(nums[i]==1 && time%2!=0 || nums[i]==0 && time%2==0 )
            {
                if(i+k>n)return -1;
                time++;
                ans++;
                flip[i]=1;
            }
        }
        return ans;
    }
};