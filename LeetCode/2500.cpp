class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int ans = 0;

        // int count = 0;

        for (int a=0; a<cols; a++) {
            int maxsFromEachRow[rows];
            int maxIdxsFromEachRow[rows];
            int globalMax = INT_MIN;

            for (int i=0; i<rows; i++) {
                int maxEle = INT_MIN;
                int maxIdx = 0;
                for (int j=0; j<cols; j++) {
                    if (grid[i][j] > maxEle) {
                        maxEle = grid[i][j];
                        maxIdx = j;
                    }
                }
                maxsFromEachRow[i] = maxEle;
                grid[i][maxIdx] = -1;  // making value of all these indexes collected = -1
                maxIdxsFromEachRow[i] = maxIdx;
                globalMax = max(maxEle, globalMax);
            }
            ans += globalMax;
        }

        // for (int i=0; i<rows; i++) {
        //     if (count == cols) {
        //         break;
        //     }
        //     int maxFromThisRow = INT_MIN;
        //     int maxIdx = 0;
        //     for (int j=0; j<cols; j++) {
        //         if (grid[i][j] > maxFromThisRow) {
        //             maxIdx = j;
        //             maxFromThisRow = grid[i][j];
        //             ans += maxFromThisRow;
        //         }
        //     }
        //     for (int k=0; k<rows; k++) {
        //         grid[k][maxIdx] = -1;
        //     }
        //     count++;
        // }
        return ans;
    }
};
