class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int i=happiness.size()-1;
        long long ans=0;
        int totalsize=happiness.size()-1;
        while(i>=0 and k>0)
        {
            int ele=happiness[i]-(totalsize-i);
            if(ele>0)
            {
                ans+=ele;
            }
            else{
                ans+=0;
            }
            k--;
            i--;
        }
        return ans;
    }
};