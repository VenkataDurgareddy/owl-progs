class Solution {
public:
    string makeFancyString(string s) {
        char first=s[0];
        char last=s[s.length()-1];
        if(s.length()<3)
        {
            return s;
        }
        string result="";
        result+=first;
        for(int i=1;i<s.length()-1;i++)
        {
            if(s[i-1]!=s[i] || s[i+1]!=s[i])
            {
                result+=s[i];
            }
        }
        result+=last;
        return result;
    }
};