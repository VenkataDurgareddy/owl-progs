class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i = 0;
        int size = colors.length();
        int cost = 0;
        while (i < size - 1) {
            set<int> s;
            vector<int> v;
            if (colors[i] == colors[i + 1]) {
                while (i < size - 1 && colors[i] == colors[i + 1]) {
                    s.insert(i);
                    s.insert(i + 1);
                    i++;
                }
                for (auto it : s) {
                    v.push_back(neededTime[it]);
                }
                sort(v.begin(), v.end());
                for (int j = 0; j < v.size() - 1; j++) {
                    cost += v[j];
                }
            }
            i++;
        }
        return cost;
    }
};
