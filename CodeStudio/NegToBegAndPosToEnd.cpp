#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n);
    
    int s = 0, e = n - 1;
    for (int i=0; i<n; i++) {
        if (nums[i] < 0) {
            ans[s] = nums[i];
            s++;
        }
        else {
            ans[e] = nums[i];
            e--;
        }
    }
    
    return ans;
}