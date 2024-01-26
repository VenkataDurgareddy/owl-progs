class Solution {
public:
    vector<int>res;
    void comb(int n,int k,vector<vector<int>>&ans,vector<bool>&freq,int s)
    {
        if(res.size()==k)
        {
            ans.push_back(res);
            return;
        }
        for(int i=s;i<=n;i++)
        {
            if(!freq[i])
            {
            res.push_back(i);
            freq[i]=true;
            comb(n,k,ans,freq,i+1);
            freq[i]=false;
            res.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<bool>freq(n+1,false);
        comb(n,k,ans,freq,1);
        return ans;
    }
};