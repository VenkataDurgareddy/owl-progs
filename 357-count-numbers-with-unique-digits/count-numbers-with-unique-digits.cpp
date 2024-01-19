class Solution {
    
public:
    int countNumbersWithUniqueDigits(int n) {
       vector<int>v(9); 
       v[0]=1;
       v[1]=10;
       v[2]=91;
       for(int i=3;i<=n;i++)
       {
           int ans=9;
           int count=9;
           for(int j=1;j<i;j++)
           {
               ans=ans*count;
               count--;
           }
           v[i]=v[i-1]+ans;
       }
       return v[n];
    }
};