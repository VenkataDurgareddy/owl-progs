class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        int ans=0;
        for(auto it:m)
        {
            if(it.second>0)
            {
                ans+=it.second;
            }
        }
        return ans;
    }
};