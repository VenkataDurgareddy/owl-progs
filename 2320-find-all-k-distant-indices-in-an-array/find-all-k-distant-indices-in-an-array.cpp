class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            int m=i+k;
            for(int j=0;j<=m and j<nums.size();j++)
            {
                if(nums[j]==key and abs(i-j)<=k)
                {
                    s.insert(i);
                }
            }
        }
        vector<int>v;
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};