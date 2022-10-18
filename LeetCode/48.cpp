class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // STEP 1: Reverse the matrix upside down
        int rows = n;
        for (int i=0; i<rows/2; i++) {
            for (int j=0; j<n; j++) {
                swap(matrix[i][j], matrix[n-i-1][j]);
            }
        }

        // STEP 2: Taking Transpose
        for (int i=0; i<n; i++) {
            for (int j=i; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};