class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++)
        {
            int cnt=0;
            for(auto it:nums)
            {
                if(it>=i)
                {
                    cnt++;
                }
            }
            if(cnt==i)
            {
                return i;
            }
        }
        return -1;
    }
};