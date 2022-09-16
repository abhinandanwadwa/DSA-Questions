// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2



#include <bits/stdc++.h> 


int firstOcc(vector<int> arr, int n, int k) {
    int s = 0, e = n-1;
    int ans = -1;
    
    while (s <= e) {
        int mid = (s + ((e - s) / 2));
        
        if (k == arr[mid]) {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {   // k < arr[mid]
            e = mid - 1;
        }
    }
    
    return ans;
}


int lastOcc(vector<int> arr, int n, int k) {
    int s = 0, e = n-1;
    int ans = -1;
    
    while (s <= e) {
        int mid = (s + ((e - s) / 2));
        
        if (k == arr[mid]) {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {   // k < arr[mid]
            e = mid - 1;
        }
    }
    
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return { firstOcc(arr, n, k), lastOcc(arr, n, k) };
}