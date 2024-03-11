class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        unordered_map<char, int>m;
        for (char c : s)
            m[c]++;

        for (char c : order) {
            if (m.find(c) != m.end()) {
                ans+=string(m[c],c);
                m.erase(c);
            }
        }
        for(auto it:m)
        {
            ans+=string(it.second,it.first);
        }

        return ans;
    }
};
