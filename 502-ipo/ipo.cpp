class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        map<int, vector<int>> m;
        for (int i = 0; i < capital.size(); i++) {
            m[capital[i]].push_back(profits[i]);
        }
        priority_queue<int> maxHeap;
        while (k > 0) {
            auto it = m.begin();
            while (it != m.end() && it->first <= w) {
                for (int it1 : it->second) {
                    maxHeap.push(it1);
                }
                it = m.erase(it);
            }
            if (maxHeap.empty()) break;
            w += maxHeap.top();
            maxHeap.pop();
            k--;
        }

        return w;
    }
};
