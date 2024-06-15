class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxheap;
        for(auto it:nums)
        {
            maxheap.push(it);
        }
        while(k>1)
        {
            maxheap.pop();
            k--;
        }
        return maxheap.top();
    }
};