#include <bits/stdc++.h> 
int classTest(int n, vector<int> &a, int k) {
    sort(a.begin(), a.end());
    for (int i=n-1; i>=0; i--) {
        k--;
        if (k == 0) {
            return a[i];
        }
    }
}