class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>c;
        for(int i=0;i<s.length();i++)
        {
            c[s[i]]++;
        }
       for(int i=0;i<s.length();i++)
       {
           if(c.find(s[i])!=c.end())
           {
               if(c[s[i]]==1)
               {
                   return i;
               }
           }
       }
       return -1;
    }
};