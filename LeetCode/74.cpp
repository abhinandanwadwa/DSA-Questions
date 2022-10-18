class Solution {

private:
    bool binarySearch(vector<int> arr, int target) {
        int n = arr.size();
        int s = 0, e = n-1;
        while (s <= e) {
            int mid = (s+e)/2;
            if (arr[mid] == target) {
                return true;
            }
            else if (arr[mid] > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> oneD;

        for (int i=0; i<rows; i++) {
            for (int j=0; j<cols; j++) {
                oneD.push_back(matrix[i][j]);
            }
        }

        return binarySearch(oneD, target);
    }
};