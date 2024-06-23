class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>v;
        int i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            //if the index having element less than present then no need so remove
            while(!dq.empty() && nums[dq.back()]<=nums[j])
            {
                dq.pop_back();
            }
            dq.push_back(j);
            //if the j moves greater than window size for that we need to remove
            if(dq.front()<(j-k)+1)
            {
                dq.pop_front();
            }
            if((j-i)+1==k)
            {
                v.push_back(nums[dq.front()]);
                i++;
            }
            j++;
        }
        return v;
    }
};