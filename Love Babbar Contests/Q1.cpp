long long appleAndCoupon(int n, int m, vector<int> arr){
    long long ans = 0;
    sort(arr.begin(), arr.end());
    for (int i=0; i<n; i++) {
        if (i != n-m) {
            ans += arr[i];
        }
    }
    return ans;
}