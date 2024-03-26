class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int result=0;
        int i=0;
        int zerocnt=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
                zerocnt++;
            }
            while(zerocnt>k)
            {
                if(nums[i]==0)
                {
                    zerocnt--;
                }
                i++;
            }
            result=max(result,j-i+1);
        }
        return result;
    }
};