class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int j=n-1;
        int maxscore=INT_MIN;
        int i=0;
        // if(n==1)
        // {
        //     if(power>=tokens[0])
        //     {
        //         return 1;
        //     }
        // }
        while(i<n and j>=0)
        {
            if(power>=tokens[i]  )
            {
                power=power-tokens[i];
                score++;
                i++;
            }
            else if(score>=1)
            {
                power=power+tokens[j];
                maxscore=max(maxscore,score);
                score--;
                j--;
            }
           else{
               break;
           }
        }
        maxscore=max(maxscore,score);
        return maxscore;
    }
};