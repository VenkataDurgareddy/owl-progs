class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            string s2="";
            for(int j=i;j<s.length();j++)
            {
                s2=s2+s[j];
                string rev=s2;
                reverse(rev.begin(),rev.end());
                if(rev==s2)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};