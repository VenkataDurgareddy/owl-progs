class Solution {
    static bool cmp(string a ,string b)
    {
        if(a+b>b+a)return true;
        return false;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string>nums1;
        for(auto it:nums)
        {
            nums1.push_back(to_string(it));
        }
        sort(nums1.begin(),nums1.end(),cmp);
        int i=0;
        for(i=0;i<nums1.size()-1;i++)
        {
            if(nums1[i]!="0")
            {
                break;
            }
        }
       
        string ans;
        for(int j=i;j<nums1.size();j++)
        {
            ans+=nums1[j];
        }
        return ans;
    }
};