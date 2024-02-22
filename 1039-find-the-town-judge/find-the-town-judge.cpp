class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       map<int,int>m1;
       map<int,int>m2;

        for (auto it: trust) {
            int a = it[0];
            int b = it[1];
            m1[a]++;
            m2[b]++;
        }

        for (int i = 1; i <= n; ++i) {
            if (m1[i] == 0 && m2[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};