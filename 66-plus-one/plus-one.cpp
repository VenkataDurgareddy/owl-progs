class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int carry=0;
       vector<int>ans;
       int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            int k=digits[i];
            if(i==n-1)
            {
                k=k+1;
            }
            else{
                k=k+carry;
            }
            ans.push_back(k%10);
            carry=k/10;

        }
        if(carry>0)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};