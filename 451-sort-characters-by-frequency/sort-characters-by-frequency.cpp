class Solution {
public:
//  static bool cmp(const pair<char, int>& a, 
//         const pair<char, int>& b) 
// { 
//     return (a.second > b.second); 
// } 
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
         auto cmp = [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        };
        vector<pair<char,int>>v(m.begin(),m.end());
       sort(v.begin(),v.end(),cmp);
       string ans="";
       for(auto it:v)
       {
           ans+=string(it.second,it.first);
       }

       return ans;
       
    }
};