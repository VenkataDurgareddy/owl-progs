class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            int ind=(i+k)%s.length();
            ans+=s[ind];
        }
        return ans;
    }
};