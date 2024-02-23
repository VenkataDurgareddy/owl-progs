class Solution {
public:
static bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int>r;
        map<char,int>s;
        for(auto it:ranks)
        {
            r[it]++;
        }
        for(auto it:suits)
        {
            s[it]++;
        }
        for(auto it:s)
        {
            if(it.second==5)
            {
                return "Flush";
            }
        }
        vector<pair<int,int>>v(r.begin(),r.end());
        sort(v.begin(),v.end(),cmp);
        for(auto it:v)
        {
            if(it.second>=3)
            {
                return "Three of a Kind";
            }
            else if(it.second==2)
            {
                return "Pair";
            }
            else if(it.second==1)
            {
                return "High Card";
            }
            
        }
        return "";
    }
};