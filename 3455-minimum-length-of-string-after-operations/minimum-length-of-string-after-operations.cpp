class Solution {
public:
    int minimumLength(string s) {
        map<char,int>freq;
        for(auto it:s)
        {
            freq[it]++;
        }
        map<char,int>left;
        int cnt=0;
        for(auto it:s)
        {
            freq[it]--;
            if(freq[it]>=1 && left[it]>0)
            {
                freq[it]--;
                cnt++;
            }
            left[it]++;


        }
        int ans=s.length()-(cnt*2);
        return ans;
    }
};