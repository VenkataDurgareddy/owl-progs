class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1;
        map<char,int>m2;
        for(auto it:ransomNote)
        {
            m1[it]++;
        }
        for(auto it:magazine)
        {
            m2[it]++;
        }
        for(auto it:ransomNote)
        {
            if(m2[it]<m1[it])
            {
                return false;
            }
        }
        return true;
    }
};