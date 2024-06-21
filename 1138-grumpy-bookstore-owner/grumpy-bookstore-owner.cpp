class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int maxcustomers=0;
        int n=customers.size();
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0)
            {
                maxcustomers+=customers[i];
            }
        }
        int j=0;
        int i=0;
        int maxgrumpycustomer=0;
        int currgrumpy=0;
        while(j<n)
        {
            if(grumpy[j]==1)
            {
                currgrumpy+=customers[j];
            }
            if((j-i)+1==minutes)
            {
                maxgrumpycustomer=max(maxgrumpycustomer,currgrumpy);
                if(grumpy[i]==1)
                {
                    currgrumpy-=customers[i];
                }
                i++;
            }
            j++;
        }
        return maxcustomers+maxgrumpycustomer;
    }
};