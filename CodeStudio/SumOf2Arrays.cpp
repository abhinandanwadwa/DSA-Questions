// #include <bits/stdc++.h>

// vector<int> reverseArr(vector<int> arr) {
//     int n = arr.size();
//     int s = 0, e = n-1;
//     while (s <= e) {
//         swap(arr[s++], arr[e--]);
//     }
//     return arr;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
//     int d1 = 0, d2 = 0;
//     for (int i=0; i<n; i++) {
//         d1 = (d1*10) + a[i];
//     }
//     for (int i=0; i<m; i++) {
//         d2 = (d2*10) + b[i];
//     }
    
//     vector<int> ans;
//     int s = d1+d2;
    
//     while (s!=0) {
//         int digit = s%10;
//         ans.push_back(digit);
//         s = s/10;
//     }
    
//     vector<int> ans1 = reverseArr(ans);
//     return ans1;
// }




#include <bits/stdc++.h> 

vector<int> reverse(vector<int> arr) {
    int n = arr.size();
    int s = 0, e = n-1;
    
    while (s < e) {
        swap(arr[s++], arr[e--]);
    }
    return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = n-1, j = m-1;
    int carry = 0;
    
    vector<int> ans;
    
    while (i >= 0 && j >= 0) {
        int val1 = a[i], val2 = b[j];
        int sum = val1 + val2 + carry;
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // First Case
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
    // Second Case
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
    // Third Case
    while (carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    vector<int> ans1 = reverse(ans);
    
    return ans1;
    
}