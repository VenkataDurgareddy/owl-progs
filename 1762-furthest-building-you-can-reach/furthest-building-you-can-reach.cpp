class Solution {
public:
     int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        int cnt = 0;
        int n = h.size();
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap to store the smallest "ladders" heights
        for (int i = 0; i < n - 1; i++) {
            int diff = h[i + 1] - h[i];
            if (diff <= 0) {
                cnt++;
                continue;
            }
            pq.push(diff);
            if (pq.size() > ladders) { // If we have more jumps than ladders
                bricks -= pq.top(); // Use bricks instead of ladder
                pq.pop();
            }
            if (bricks < 0) { // If we run out of bricks
                return cnt;
            }
            cnt++;
        }
        return cnt;
    }
};