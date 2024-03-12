    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int pro=1;
            int zerocnt=0;
            vector<int>ans;
            for(auto it:nums)
            {
                if(it==0)
                {
                    zerocnt++;
                }
            }
            if(zerocnt>1)
            {
            // ans(nums.size(),0);
            for(int i = 0 ; i < nums.size(); i++) ans.push_back(0);
                return ans;
            }
            else{
                for(auto it:nums)
                {
                    if(it!=0)
                    {
                        pro=pro*it;
                    }
                }
            }
            if(zerocnt==1)
            {
                for(auto it:nums)
                {
                    if(it==0)
                    {
                        ans.push_back(pro);
                    }
                    else{
                        ans.push_back(0);
                    }
                }
            }
            else{
            for(auto it:nums)
                {
                
                      ans.push_back(pro/it);
                    
                } 
            }
            return ans;
        }
    };