class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total=0,tank=0,index=0;
        for(int i=0;i<n;i++)
        {
            int curr=gas[i]-cost[i];
            tank+=curr;
            if(tank<0)
            {
                index=i+1;
                tank=0;
            }
            total+=curr;
        }
        return total>=0?index:-1;
    }
};