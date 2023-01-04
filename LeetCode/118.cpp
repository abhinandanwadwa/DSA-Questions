class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if (numRows == 1) return ans;

        ans.push_back({1, 1});

        if (numRows == 2) return ans;

        int left = numRows - 2;
        for (int i=0; i<left; i++) {
            int sizeOfThis = i+3;
            vector<int> arr;

            // First 1
            arr.push_back(1);

            // Do your stuff here
            for (int j=0; j<i+1; j++) {
                int theElement = ans[i+1][j] + ans[i+1][j+1];
                arr.push_back(theElement);
            }

            // Last 1
            arr.push_back(1);

            ans.push_back(arr);
        }
        return ans;
    }
};