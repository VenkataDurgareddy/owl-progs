
class Solution {
public:
        string removeKdigits(std::string num, int k) {
        vector<char> s;
        if (num.length() == k) {
            return "0";
        }
        for (char c : num) {
            while (!s.empty() && c < s.back() && k > 0) {
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        while (k > 0) {
            s.pop_back();
            k--;
        }
        string ans = "";
        for (char c : s) {
            ans += c;
        }
        int index = 0;
        while (index < ans.length() && ans[index] == '0') {
            index++;
        }
        return (index < ans.length()) ? ans.substr(index) : "0";
    }
};
