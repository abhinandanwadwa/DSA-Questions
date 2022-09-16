#include <bits/stdc++.h>

int findPivot(vector<int> arr, int n) {
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + ((e - s) / 2));
        
        if (arr[mid] < arr[0]) {
            // mid lies on the second line
            e = mid;
        }
        else {
            // mid lies on the first line
            s = mid + 1;
        }
        
        if (s == e) {
            return s;
        }
    }
    return -1;
}


int binarySearch(vector<int> arr, int n, int k, int s, int e) {
    while (s <= e) {
        int mid = (s + ((e - s) / 2));
        if (k == arr[mid]) {
            return mid;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    
    if (n == 1 && arr[0] == k) {
        return 0;
    }
    
    int pivot = findPivot(arr, n);
    
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        // The element to search lies on the second line
        return binarySearch(arr, n, k, pivot, n-1);
    }
    else {
        // The element to search lies on the first line
        return binarySearch(arr, n, k, 0, pivot-1);
    }
    
    
    return 0;
}

