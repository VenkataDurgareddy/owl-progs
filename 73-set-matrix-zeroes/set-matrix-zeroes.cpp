#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dup(m, vector<int>(n, INT_MAX));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    for(int c = 0; c < n; c++) {
                        dup[i][c] = 0; // Update entire row
                    }
                    // For row
                    for(int r = 0; r < m; r++) {
                        dup[r][j] = 0; // Update entire column
                    }
                }
            }
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(dup[i][j] == INT_MAX) {
                    dup[i][j] = matrix[i][j];
                }
            }
        }
        
          for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                matrix[i][j]=dup[i][j];
            }
        }
    }
};
