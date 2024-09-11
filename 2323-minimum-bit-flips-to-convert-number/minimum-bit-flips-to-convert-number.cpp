class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int op=32;
        while(op--)
        {
            int k1=start&1;
            int k2=goal&1;
            if(k1!=k2)
            {
                cnt++;
            }
            start>>=1;
            goal>>=1;
        }
        return cnt;
    }
};