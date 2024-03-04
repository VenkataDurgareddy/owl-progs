class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        vector<int>vis(n,0);
        int j=n-1;
        int maxscore=INT_MIN;
        int i=0;
        if(n==1)
        {
            if(power>=tokens[0])
            {
                return 1;
            }
        }
        while(i<n and j>0)
        {
            if(power>=tokens[i] and vis[i]==0 )
            {
                power=power-tokens[i];
                score++;
                vis[i]=1;
                i++;
            }
            else if(score>=1 and vis[j]==0)
            {
                power=power+tokens[j];
                maxscore=max(maxscore,score);
                score--;
                vis[j]=1;
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