#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0;
        long long sum = 0, ans = 0;
        map<int, int> m;

        while (j < nums.size()) {
            sum += nums[j];
            m[nums[j]]++;
            while (m[nums[j]] > 1 || (j - i + 1) > k) {
                m[nums[i]]--;
                if (m[nums[i]] == 0) {
                    m.erase(nums[i]);
                }
                sum -= nums[i];
                i++;
            }

            if ((j - i + 1) == k) {
                ans = max(ans, sum);
            }

            j++;
        }

        return ans;
    }
};
