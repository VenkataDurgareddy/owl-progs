class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>nums;
        for(int i=1;i<=9;i++)
        {
            int num=i;
            int nextdigit=i+1;
            while(num<=high and nextdigit<=9)
            {
                num=(num*10)+nextdigit;
                if(num>=low and num<=high)
                {
                    nums.push_back(num);
                }
                nextdigit++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};