#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int i=0; i<mCols; i++) {
        if (i & 1) {
            // "i" is Odd:
            for (int j=nRows-1; j>=0; j--) {
                ans.push_back(arr[j][i]);
            }
        }
        else {
            // "i" is even:
            for (int j=0; j<nRows; j++) {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}