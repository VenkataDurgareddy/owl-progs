class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m1;
        int j=0;
        for(auto it:s)
        {
            if(m1.find(it)==m1.end())
            {
                for(auto it:m1)
                {
                    if(it.second==t[j])
                    {
                        return false;
                    }
                }
                m1[it]=t[j];
            }
            else{
                if(m1[it]!=t[j])
                {
                    return false;
                }
            }
            j++;
        }
        return true;
    }
};