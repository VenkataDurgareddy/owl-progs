class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int minboats=0;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit and i!=j)
            {
                minboats++;
                i++;
                j--;

            }
            else 
            {
                if(people[j]<=limit)
                {
                    minboats++;
                    j--;
                }
            }
           
        }
        return minboats;
    }
};