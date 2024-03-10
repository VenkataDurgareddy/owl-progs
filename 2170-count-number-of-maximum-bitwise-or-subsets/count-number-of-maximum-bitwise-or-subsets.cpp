class Solution {
public:
    int maxOR;
    int countMaxOR;
    
    void dfs(vector<int>& nums, int index, int currentOR) {
        if (index == nums.size()) {
            if (currentOR == maxOR)
                countMaxOR++;
            return;
        }
        dfs(nums, index + 1, currentOR | nums[index]);
        dfs(nums, index + 1, currentOR);
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        maxOR = 0;
        for (int num : nums)
            maxOR |= num;
        countMaxOR = 0;
        dfs(nums, 0, 0);
        return countMaxOR;
    }
};
