#include <bits/stdc++.h>

vector<int> reverseArr(vector<int> arr) {
    int n = arr.size();
    int s = 0, e = n-1;
    while (s <= e) {
        swap(arr[s++], arr[e--]);
    }
    return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int d1 = 0, d2 = 0;
    for (int i=0; i<n; i++) {
        d1 = (d1*10) + a[i];
    }
    for (int i=0; i<m; i++) {
        d2 = (d2*10) + b[i];
    }
    
    vector<int> ans;
    int s = d1+d2;
    
    while (s!=0) {
        int digit = s%10;
        ans.push_back(digit);
        s = s/10;
    }
    
    vector<int> ans1 = reverseArr(ans);
    return ans1;
}