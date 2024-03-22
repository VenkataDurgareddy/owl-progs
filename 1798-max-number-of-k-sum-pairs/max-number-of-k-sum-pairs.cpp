class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0;
        int j=nums.size()-1;
        int cnt=0;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            int ans=nums[i]+nums[j];
            if(ans==k)
            {
                i++;
                j--;
                cnt++;
            }
            else if(ans<k)
            {
                i++;
            }
            else{
                j--;
            }
        }
        return cnt;
    }
};