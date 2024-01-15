class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map<int,int>m1;
       map<int,int>m2;
        vector<vector<int>>ans;
        for(int i=0;i<matches.size();i++)
        {
           m1[matches[i][0]]++;
           m2[matches[i][1]]++;
        }
        vector<int>noloss;
        vector<int>onelost;
        for(auto it:m1)
        {
            if(m2.find(it.first)==m2.end() and find(noloss.begin(),noloss.end(),it.first)==noloss.end())
            {
                noloss.push_back(it.first);
            }
        }
       for(auto it:m2)
       {
           if(it.second==1)
           {
               onelost.push_back(it.first);
           }
       }
       ans.push_back(noloss);
       ans.push_back(onelost);
        return ans;
        
    }
};