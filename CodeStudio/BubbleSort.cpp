#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    int temp = n - 1;
    while (temp--) {
        for (int i=0; i<n-1; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}
