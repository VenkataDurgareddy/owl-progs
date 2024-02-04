class Solution {
public:

    void palindrome(string s, vector<vector<string>>& ans, int ind, vector<string>& s1) {
        if (ind == s.size()) {
            ans.push_back(s1);
            return;
        }
        for (int i = ind; i < s.size(); i++) {
            string s2 = s.substr(ind, i - ind + 1);
            if (s2 == string(s2.rbegin(), s2.rend())) {
                s1.push_back(s2);
                palindrome(s, ans, i + 1, s1);
                s1.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> s1;
        palindrome(s, ans, 0, s1);
        return ans;
    }
};
