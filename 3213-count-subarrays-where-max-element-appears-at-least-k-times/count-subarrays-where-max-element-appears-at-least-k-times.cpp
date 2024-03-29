class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxele = *max_element(nums.begin(), nums.end());
        map<int,int>freq;
        long long int   ans = 0;
        int right = 0;
        int left = 0;
        long long int n = nums.size();
        freq[maxele]=0;
        while (right < n) {
           if(nums[right]==maxele) freq[maxele]++;
            while (freq[maxele] >= k && left <= right) {
                if(nums[left]==maxele)
                {
                freq[maxele]--;
                }
                left++;
            }
            ans += right - left + 1; 
            right++;
        }
        long long  int total=(n*(n+1))/2;
      return total-ans;
    }
};
