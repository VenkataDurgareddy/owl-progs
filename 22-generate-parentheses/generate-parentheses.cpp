class Solution {
public:
    void generate(int n, vector<string>& ans, string s, int oc, int cc) {
        if (oc == n && cc == n) {
            ans.push_back(s);
            return;
        }
        if (oc < n) {
            generate(n, ans, s + '(', oc + 1, cc);
        }
        if (cc < oc) {
            generate(n, ans, s + ')', oc, cc + 1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        generate(n, ans, s, 0, 0);
        return ans;
    }
};
