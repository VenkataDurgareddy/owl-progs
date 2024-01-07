class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       long long int k=pow(2,nums.size());
       int j=0;
       for(int i=0;i<k;i++)
       {
           vector<int>v;
           for(int j=0;j<nums.size();j++)
           {
              if(((i)&(1<<j))!=0)
               {
                   v.push_back(nums[j]);
               }
           }
           ans.push_back(v);
       }
       return ans;
    }
};