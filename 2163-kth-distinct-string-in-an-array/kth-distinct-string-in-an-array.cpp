class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m;
        for(auto it:arr)
        {
            m[it]++;
        }
        int i=1;
        for(auto it:arr)
        {
            if(m[it]==1)
            {
                if(i==k)
                {
                    return it;
                }
                i++;
            }
        }
        return "";
    }
};