#include <bits/stdc++.h> 
long long threeWaySplit(int n, vector<int> arr){
    int s = 0, e = n-1;
    long long sSum = arr[s], eSum = arr[e];
    long long ans = 0;
    
    while (s < e) {
        if (sSum > eSum) {
            e--;
            eSum += arr[e];
        }
        else if (sSum < eSum) {
            s++;
            sSum += arr[s];
        }
        else {
            // sSum == eSum
            ans = sSum;
            s++;
            sSum += arr[s];
        }
    }
    
    return ans;
}