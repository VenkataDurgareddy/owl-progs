class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>m;
        int n=numbers.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int diff=target-numbers[i];
            if(m[diff]>0)
            {
                return{m[diff],i+1};
            }
            m[numbers[i]]=i+1;
        }
        return {};
    }
};