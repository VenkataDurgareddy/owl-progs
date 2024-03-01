class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int onescount=0;
        int zerocount=0;
        for(auto it:s)
        {
            if(it=='1')
            {
                onescount++;
            }
            else{
                zerocount++;
            }
        }
        string ans="";
        for(int i=1;i<=onescount-1;i++)
        {
            ans=ans+'1';
        }
        for(int i=1;i<=zerocount;i++)
        {
            ans=ans+'0';
        }
        ans=ans+'1';
        return ans;

    }
};