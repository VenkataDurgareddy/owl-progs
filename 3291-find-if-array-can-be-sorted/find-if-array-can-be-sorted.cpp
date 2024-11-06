class Solution {
public:
    int countsetbits(int a)
    {
        int cnt=0;
        while(a!=0)
        
        {
            if(a&1)
            {
                cnt++;
            }
            a>>=1;
        }
       return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    if(countsetbits(nums[j])!=countsetbits(nums[j+1]))return false;
                    else{
                        swap(nums[j],nums[j+1]);
                }
                }
            }
        }
        return true;
       
    }
};