class Solution {
public:
    int ans;
    map<int,int>m;
    int subset(vector<int>&nums, int i, int n, int bitore, vector<int>&v) {
        if (i >= n) {
            bitore = 0;
            for (auto it : v) {
                bitore = bitore | it;
            }
            m[bitore]++;
            ans = max(ans, bitore);
            return ans;
        }
        v.push_back(nums[i]);
        subset(nums, i + 1, n, bitore, v);
        v.pop_back();
        subset(nums, i + 1, n, bitore, v);
        return ans;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        int an = subset(nums, 0, n, 0, v);
        return m[an];
    }
};
