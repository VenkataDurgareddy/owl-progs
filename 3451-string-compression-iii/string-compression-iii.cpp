class Solution {
public:
    string compressedString(string word) {
        char prev=word[0];
        word+=" ";
        string ans="";
        int cnt=0;
        for(auto it:word)
        {
            if(it!=prev)
            {
                if(cnt<=9)
                {
                  ans+=to_string(cnt);
                  ans+=prev;
                  cnt=0;
                }
                else{
                    while(cnt>9)
                 {
                    ans+="9";
                    ans+=prev;
                    cnt-=9;
                }
                if(cnt>0)
                {
                    ans+=to_string(cnt)+prev;
                    cnt=0;
                }
                }
            }
            prev=it;
            cnt++;

        }
        return ans;
    }
};