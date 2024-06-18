class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int maxProfit = 0;
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());

        int j = 0, best = 0;
        for (int i = 0; i < worker.size(); i++) {
            while (j < n && worker[i] >= jobs[j].first) {
                best = max(best, jobs[j].second);
                j++;
            }
            maxProfit += best;
        }

        return maxProfit;
    }
};
