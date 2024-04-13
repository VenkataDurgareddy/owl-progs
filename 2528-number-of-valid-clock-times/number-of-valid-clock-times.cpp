class Solution {
public:
    int countTime(string time) {
        int markcount=0;
        for(int i=0;i<time.length();i++)
        {
            if(time[i]=='?')
            {
                markcount++;
            }
        }
        if(markcount==4)return 1440;
        int ans=1;
        if(time[0]=='?')
        {
            if(time[1]<'4') ans=ans*3;
            else if(time[1]>='4' and time[1]<='9')ans=ans*2;
        }
        if(time[1]=='?')
        {
            if(time[0]>='0' and time[0]<='1')
            {
                ans=ans*10;
            }
            else if(time[0]=='2')
            {
                ans=ans*4;
            }
            else if(time[0]=='?')
            {
                ans=ans*24;
            }
        }
        if(time[3]=='?')
        {
            ans=ans*6;
        }
        if(time[4]=='?')
        {
            ans=ans*10;
        }
        return ans;
    }
};