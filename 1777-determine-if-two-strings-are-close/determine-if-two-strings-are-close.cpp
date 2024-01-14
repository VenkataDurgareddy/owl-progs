class Solution {
public:
    bool closeStrings(string word1, string word2) {
       unordered_map<char,int>m1;
       unordered_map<char,int>m2;
       for(int i=0;i<word1.length();i++)
       {
           m1[word1[i]]++;
       } 
       for(int i=0;i<word2.length();i++)
       {
           m2[word2[i]]++;
       }
      vector<int>v1;
      vector<int>v2;
      for(auto it:m1)
      {
          v1.push_back(it.second);
    }
    for(auto it:m2)
    {
        v2.push_back(it.second);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(auto it:m1)
    {
        int k=it.first;
        if(m2.find(k)==m2.end())
        {
            return false;
        }
    }
    return v1==v2;
       
       
    }
};