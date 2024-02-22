class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>m;
        for(auto it:arr)
        {
            int k=__builtin_popcount(it);
            m.push_back(make_pair(k,it));
        }
        sort(m.begin(),m.end());
        vector<int>ans;
        for(auto it:m)
        {
           ans.push_back(it.second);
        }
        return ans;
    }
};