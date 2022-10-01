#include <bits/stdc++.h>

void printArr(vector<int> arr) {
    int n = arr.size();
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void reverse(vector<int> arr) {
    int n = arr.size();
    for (int i=0; i<n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }
}

void reverseArray(vector<int> &arr , int m)
{
    int n = arr.size();
    vector<int> temp;
    for (int i=m+1; i<n; i++) {
        temp.push_back(arr[i]);
    }
//     reverse(temp);
    
    for (int i=0; i<temp.size()/2; i++) {
        swap(temp[i], temp[temp.size()-i-1]);
    }
    
    
//     printArr(temp);
    
    
    int x = temp.size();
    int a = 0;
    for (int i=m+1; i<n; i++) {
        arr[i] = temp[a];
        a++;
    }
}
