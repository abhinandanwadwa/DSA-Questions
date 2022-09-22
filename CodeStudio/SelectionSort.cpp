#include <bits/stdc++.h> 

int minValue(vector<int>& arr, int n, int i) {
    int minEle = INT_MAX;
    for (int j=i; j<n; j++) {
        minEle = min(minEle, arr[j]);
    }
    return minEle;
}

int minValueIdx(vector<int>& arr, int n, int minValue, int i) {
    for (int j=i; j<n; j++) {
        if (arr[j] == minValue) {
            return j;
        }
    }
}

void selectionSort(vector<int>& arr, int n)
{
    for (int i=0; i<n-1; i++) {
        int minVal = minValue(arr, n, i);
        int minIdx = minValueIdx(arr, n, minVal, i);
        
        swap(arr[minIdx], arr[i]);
        
    }
}