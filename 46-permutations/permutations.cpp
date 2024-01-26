class Solution {
public:
    vector<int>res;
    void per(vector<int>&v,vector<vector<int>>&a,int n,vector<bool>&freq)
    {
        if(res.size()==n)
        {
            a.push_back(res);
            return;
        }
        for(int i=0;i<v.size();i++)
        {
            if(!freq[i])
            {
                res.push_back(v[i]);
                freq[i]=true;
                per(v,a,n,freq);
                res.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool>freq(nums.size(),false);
        per(nums,ans,nums.size(),freq);
        return ans;
    }
};