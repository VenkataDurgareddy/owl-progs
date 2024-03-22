class Solution {
public:
    int compress(vector<char>& chars) {
        char c = chars[0];
        int cnt = 1;
        string ans = "";
        int i;
        for (i = 1; i < chars.size(); i++) {
            if (chars[i] == c) {
                cnt++;
            } else {
                ans += c;
                if (cnt > 1) {
                    ans += to_string(cnt);
                }
                cnt = 1;
                c = chars[i];
            }
        }
        ans += c;
        if (cnt > 1) {
            ans += to_string(cnt);
        }
        chars.clear();
        for (auto it : ans) {
            chars.push_back(it);
        }
        return ans.length();
    }
};
