class Solution {
public:
    static bool cmp (pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>m;
        int m1=0;
        for(auto it:arr)
        {
            m[it]++;
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),cmp);
        vector<pair<int,int>>ans;
        int cnt=0;
        for(auto it:v)
        {
            if(it.second<=k)
            {
                k=k-it.second;
                it.second=0;
                cnt++;
            }
            else{
                break;
            }
        }


        return v.size()-cnt;
    }
};