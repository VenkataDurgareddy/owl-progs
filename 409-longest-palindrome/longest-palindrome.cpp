class Solution {
public:
    int longestPalindrome(string s) {
      map<char,int>m;
      for(auto it:s)
      {
        m[it]++;
      }  
     int ans=0;
     int maxodd=0;
     vector<int>odd;
     int onescnt=0;
     for(auto it:m)
     {
        if(it.second%2!=0)
        {
            odd.push_back(it.second);
        }
        else{
            ans+=it.second;
        }
       
     }
     sort(odd.rbegin(),odd.rend());
     int i=0;
     for(auto it:odd)
     {
        if(i==0)
        {
            ans+=it;
            i=1;
        }
        else{
            ans+=it-1;
        }
     }
     return ans;
    }
};