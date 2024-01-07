class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>>v;
        long long int k=pow(2,nums.size());
        for(int i=0;i<k;i++)
        {
            vector<int>a;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                {
                    a.push_back(nums[j]);
                }
            }
            sort(a.begin(),a.end());
            if(find(v.begin(),v.end(),a)==v.end())
            {
                v.push_back(a);
            }
        }
        return v;  
    }
};