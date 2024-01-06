class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for(auto it:image)
        {
            vector<int>v;
            for(int i=0;i<it.size();i++)
            {
                int k=it[i]^1;
                v.push_back(k);
            }
            reverse(v.begin(),v.end());
            ans.push_back(v);
        }

        return ans;
    }
};