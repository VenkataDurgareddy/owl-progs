class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int totaltime=0;
        queue<int>q;
        for(auto it:tickets)
        {
            q.push(it);
        }
        int i=0;
        while(tickets[k]!=0)
        {
                if(tickets[i]!=0)
                {
                    tickets[i]--;
                    totaltime++;
                }
                i++;
                if(i>=tickets.size())
                {
                    i=0;
                }
        }
        return totaltime;
    }
};