class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,string>m;
        vector<int>v(score);
        sort(score.rbegin(),score.rend());
        for(int i=0;i<score.size();i++)
        {
            if(i==0)
            {
                m[score[i]]="Gold Medal";
            }
            else if(i==1)
            {
                m[score[i]]="Silver Medal";
            }
            else if(i==2)
            {
                m[score[i]]="Bronze Medal";
            }
            else{
                m[score[i]]=to_string(i+1);
            }
        }
        vector<string>ans;
        for(auto it:v)
        {
            ans.push_back(m[it]);
        }
        return ans;

    }
};