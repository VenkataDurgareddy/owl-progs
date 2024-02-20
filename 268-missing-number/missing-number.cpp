class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                return i;
            }
        }
        return 0;
    }
};