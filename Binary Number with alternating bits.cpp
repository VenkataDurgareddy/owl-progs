class Solution {
public:
    bool hasAlternatingBits(int n) {
    vector<int>v;
    while(n!=0)
    {
        int k=n&1;
        v.push_back(k);
        n>>=1;
    }
    for(int i=v.size()-1;i>0;i--)
    {
        if(v[i]==v[i-1])
        {
          return false;
        }
    }
    return true;
    }
};
