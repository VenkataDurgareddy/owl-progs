class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v1(heights);
        sort(v1.begin(),v1.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=v1[i]){
                cnt++;
            }
        }
        return cnt;
    }
};