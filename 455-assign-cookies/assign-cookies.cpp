class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int cnt=0;
        while(j<s.size() and i<g.size())
        {
            if(g[i]<=s[j])
            {
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};