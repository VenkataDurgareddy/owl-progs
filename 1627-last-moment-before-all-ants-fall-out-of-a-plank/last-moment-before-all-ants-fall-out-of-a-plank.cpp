class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int k1=0;
        int k2=0;
        if(left.size()!=0)
        {
            k1=*max_element(left.begin(),left.end());
       }
       if(right.size()!=0)
       {
            k2=*min_element(right.begin(),right.end());
        
        }
         if(right.size()==0)
        {
           return *max_element(left.begin(),left.end());
       }
       if(left.size()==0)
       {
            int ans=*min_element(right.begin(),right.end());
            return n-ans;
        
        }
        return max((k1),(n-k2));


        
       
    }
};