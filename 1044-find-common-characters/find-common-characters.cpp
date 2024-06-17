class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<map<char,int>>mp(words.size());
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                mp[i][words[i][j]]++;
            }
        }
        map<char,int>first;
        for(int i=0;i<words[0].size();i++)
        {
            first[words[0][i]]++;
        }
        vector<string>ans;
        for (auto& it : first) {
            char c = it.first;
            int minFreq = it.second;
            
            for (int j = 1; j < mp.size(); j++) {
                if (mp[j][c] == 0) {
                    minFreq = 0;
                    break;
                }
                minFreq = min(minFreq, mp[j][c]);
            }
            
            for (int k = 0; k < minFreq; k++) {
                ans.push_back(string(1, c));
            }
        }
        return ans;
    }
};