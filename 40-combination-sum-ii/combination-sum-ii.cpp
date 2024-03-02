class Solution {
public:
    void csum(vector<int>& nums, int target, int sum, int start, vector<vector<int>>& ans, vector<int>& r) {
        // Base case
        if (sum == target ) {
            ans.push_back(r);
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
           // Skip duplicates
            if (i > start && nums[i] == nums[i - 1])
                continue;
            
            if (sum + nums[i] <= target) {
                r.push_back(nums[i]);
                csum(nums, target, sum + nums[i], i + 1, ans, r);
                r.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> r;
        csum(candidates, target, 0, 0, ans, r);
        return ans;
    }
};
