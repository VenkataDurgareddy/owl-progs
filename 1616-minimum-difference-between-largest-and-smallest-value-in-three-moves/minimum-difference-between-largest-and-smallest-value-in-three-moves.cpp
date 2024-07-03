#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0; 

        sort(nums.begin(), nums.end());

        int diff1 = nums[n - 1] - nums[3];  // Remove first 3 elements
        int diff2 = nums[n - 2] - nums[2];  // Remove first 2 and last 1 elements
        int diff3 = nums[n - 3] - nums[1];  // Remove first 1 and last 2 elements
        int diff4 = nums[n - 4] - nums[0];  // Remove last 3 elements

        return min({diff1, diff2, diff3, diff4});
    }
};
