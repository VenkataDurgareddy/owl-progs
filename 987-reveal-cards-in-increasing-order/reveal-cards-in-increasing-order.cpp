class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        int len=deck.size();
        for(int i=0;i<len;i++)
        {
            q.push(i);
        }
        sort(deck.begin(),deck.end());
        int i=0;
        vector<int>ans(len);
        while(i<len)
        {
            if(!q.empty())
            {
                ans[q.front()]=deck[i];
                q.pop();
                if(!q.empty())
                {
                int ele=q.front();
                q.pop();
                q.push(ele);
                }
            }
            i++;
        }
        return ans;
    }
};