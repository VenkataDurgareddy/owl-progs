class Solution {
    bool isprime(int n)
    {
        if(n==1)return false;
        for(int i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
public:
    
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>primes;
        for(int i=0;i<nums.size();i++)
        {
            if(isprime(nums[i]))
            {
               primes.push_back(i); 
            }
        }
       return primes[primes.size()-1]-primes[0];
        
    }
};