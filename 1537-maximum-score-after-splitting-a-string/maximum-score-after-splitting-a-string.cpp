class Solution {
public:
    int maxScore(string s) {
        int leftzero=0;
        int rightone=0;
        for(auto it:s)
        {
            if(it=='1')
            {
                rightone++;
            }
        }
        int maxscore=INT_MIN;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0')
            {
                leftzero++;
            }
            if(s[i]=='1')
            {
                rightone--;
            }

            maxscore=max(maxscore,leftzero+rightone);
        }
        return maxscore;
    }
};