class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cord) {
        int xdiff = cord[0][0] - cord[1][0];
        int ydiff = cord[0][1] - cord[1][1];
        
        for (int i = 2; i < cord.size(); i++) {
            int currxdiff = cord[i][0] - cord[i-1][0];
            int currydiff = cord[i][1] - cord[i-1][1];
            
            if (ydiff * currxdiff != xdiff * currydiff) {
                return false;
            }
        }
        
        return true;
    }
};
