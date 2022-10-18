class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int s = 0, e = (rows * cols)-1;

        while (s <= e) {
            int mid = s + ((e-s)/2);

            int row = mid/cols, col = mid%cols;
            int current = matrix[row][col];

            if (current == target) {
                return true;
            }
            else if (current > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return false;
    }
};