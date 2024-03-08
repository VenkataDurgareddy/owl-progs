class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        for(auto it:nums)
        {
            m[it]++;
        }
        for(auto it:m)
        {
            if(it.second>=2)
            {
                for(int i=0;i<2;i++)
                {
                    v.push_back(it.first);
                }
            }
            else{
                v.push_back(it.first);
            }
        }
        nums.clear();
        for(auto it:v)
        {
            nums.push_back(it);
        }
        return nums.size();
    }
};