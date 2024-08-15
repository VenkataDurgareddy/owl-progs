class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money=0;
        int five=0;
        int ten=0;
        for(auto it:bills)
        {
              if(it==5)
              {
                five++;
              }
              else if(it==10)
              {
                if(five>0)
                {
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
              }
              else{
                if(ten<=0)
                {
                    if(five<3)
                    {
                        return false;
                    }
                    else{
                        five-=3;
                    }
                }
                else{
                    if(five<=0)
                    {
                        return false;
                    }
                    else{
                        ten--;
                        five--;
                    }
                    
                }
              }
        }

        return true;
    }
};