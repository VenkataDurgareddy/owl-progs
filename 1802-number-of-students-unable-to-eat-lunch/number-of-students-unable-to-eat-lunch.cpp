class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (auto it : students) {
            q.push(it);
        }
        int i = 0;
        int cnt = 1;
        int stuckCount = 0; 
        while (!q.empty()) {
            if (q.front() == sandwiches[i]) {
                q.pop();
                i++;
                stuckCount = 0; 
            } else {
                int ele = q.front();
                q.pop();
                q.push(ele);
                stuckCount++;
            }
            if (stuckCount >= q.size()) {
                break;
            }
        }
        return q.size();
    }
};
