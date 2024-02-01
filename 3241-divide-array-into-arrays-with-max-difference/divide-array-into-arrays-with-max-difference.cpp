class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        if(nums.size()%3==0)
        {
            vector<int>v;
            int i=1;
            int prev;
           v.push_back(nums[0]);
            while(i<nums.size())
            {
                if(v.size()>=1)
                {
                  prev=v[0];
                }
                else{
                    prev=nums[i];
                }
                if(abs(prev-nums[i])<=k)
                {
                    v.push_back(nums[i]);
                    prev=nums[i];
                }
                if(abs(prev-nums[i])>k)
                {
                    return {};
                }
                if(v.size()==3)
                {
                    ans.push_back(v);
                    v.clear();
                }
                i++;
            }
        }
        return ans;
        
    }
};