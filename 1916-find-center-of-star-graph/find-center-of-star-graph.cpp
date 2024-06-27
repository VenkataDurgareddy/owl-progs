class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(auto it:edges)
        {
            for(auto it1:it)
            {
                mp[it1]++;
            }
        }
        int k=edges.size();
        int ans=0;
        for(auto it:mp)
        {
            if(it.second==k)
            {
                ans=it.first;
            }
        }
        return ans;
    }
};