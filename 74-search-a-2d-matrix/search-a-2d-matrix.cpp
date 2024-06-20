class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for (int i = 0; i < rows; i++) {
            if (matrix[i][cols - 1] == target) {
                return true;
            } else if (matrix[i][cols - 1] > target) {
                for (int j = 0; j < cols; j++) {
                    if (matrix[i][j] == target) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};
