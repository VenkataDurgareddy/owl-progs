class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans(2);
        map<int,int>m;
        for(int i=1;i<=nums.size();i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                ans[1]=i;
            }

           
        }
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==2)
            {
                ans[0]=it.first;
                break;
            }
        }
        return ans;
    }
};