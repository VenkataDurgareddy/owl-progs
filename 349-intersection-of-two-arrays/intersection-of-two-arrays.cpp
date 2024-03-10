class Solution {
public:
    vector<int> intersection(vector<int>& v, vector<int>& v2) {
        vector<int>v3;
       sort(v.begin(),v.end());
       sort(v2.begin(),v2.end());
       int j=0;
       int i=0;
       
       while(i<v.size()&&j<v2.size())
       {
           if(v[i]==v2[j])
           {
               v3.push_back(v[i]);
               i++;
               j++;
           }
           else if(v[i]<v2[j])
           {
               i++;
           }
           else if(v[i]>v2[j])
           {
               j++;
           }
       } 
       v3.erase(unique(v3.begin(),v3.end()),v3.end());
       return v3;
    }
};