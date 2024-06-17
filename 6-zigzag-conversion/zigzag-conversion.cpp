class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        string ans="";
        int k=2*(numRows-1);
        int index=0;
        int n=s.length();
        for(int i=0;i<numRows;i++)
        {
            index=i;
            while(index<n)
            {
                ans+=s[index];
                if(i!=0 and i!=numRows-1)
                {
                    int k1=k-(2*i);
                    int k2=index+k1;
                    if(k2<n)
                    {
                        ans+=s[k2];
                    }
                }
                index+=k;
            }
            

        }
        return ans;
    }
};