class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string dup=s;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            else if(s[i]==')')
            {
                if(count>0)
                {
                    count--;
                }
                else{
                    s[i]='0';
                }
            }
        }
        count=0;
        for(int i=dup.length()-1;i>=0;i--)
        {
            if(dup[i]==')')
            {
                count++;
            }
            else if(dup[i]=='(')
            {
                if(count>0)
                {
                    count--;
                }
                else{
                    dup[i]='0';
                }
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0' and dup[i]!='0')
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};