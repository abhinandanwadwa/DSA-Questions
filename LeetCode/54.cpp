class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix[0].size();
        int m = matrix.size();

        int count = 0;
        int totalElements = m*n;

        int startingRow = 0, endingRow = m-1, startingCol = 0, endingCol = n-1;

        while (count < totalElements) { // OR (while(startingRow <= endingRow && startingCol <= endingCol))
            for (int i=startingCol; i<=endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            if (count >= totalElements) break;
            startingRow++;
            for (int i=startingRow; i<=endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            if (count >= totalElements) break;
            endingCol--;
            for (int i=endingCol; i>=startingCol; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            if (count >= totalElements) break;
            endingRow--;
            for (int i=endingRow; i>=startingRow; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            if (count >= totalElements) break;
            startingCol++;
        }
        return ans;
    }
};