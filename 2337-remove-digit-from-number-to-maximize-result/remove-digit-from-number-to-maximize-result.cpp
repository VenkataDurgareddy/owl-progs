class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="";
        int cnt=0;
       int n=number.length();
       for(int i=0;i<n;i++)
       {
            if(number[i]==digit)
            {
                string s1=number.substr(0,i);
                string s2=number.substr(i+1);
                string dup=s1+s2;
                ans=max(ans,dup);
            }
       }
       return ans;
    }
};