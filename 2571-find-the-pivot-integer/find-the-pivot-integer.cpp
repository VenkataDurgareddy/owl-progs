class Solution {
public:
    int pivotInteger(int n) {
        int i=1;
        int j=0;
        int totalsum=(n*(n+1))/2;
        while(i<=n)
        {
           int k1=((i*(i+1))/2);
           int sum=((j*(j+1))/2);
           int k2=totalsum-sum;
           if(k1==k2)
           {
            return i;
           }
           i++;
           j++;
        }
        return -1;
    }
};