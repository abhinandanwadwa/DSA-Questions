int searchMe(int arr[], int s, int e, int val) {
    if (s > e) {
        return -1;
    }
    int mid = s + ((e-s)/2);
    if (arr[mid] == val) {
        return mid;
    }
    
    if (arr[mid] < val) {
        return searchMe(arr, mid+1, e, val);
    }
    else {
        return searchMe(arr, s, mid-1, val);
    }
    return -1;
}

int binarySearch(int *input, int n, int val)
{   
    // Recursive Relation and processing
//     int mid = n/2;
//     if (input[mid] == val) {
//         return 1;
//     }
//     if (input[mid] < val) {
//         // Right part will be processed now
//         if (binarySearch(input+(n/2), n/2, val)) {
//             return 1;   
//         }
//         else {
//             return -1;
//         }
//     }
//     else {
//         // Left part will be processed now
//         if (binarySearch(input, n/2, val)) {
//             return 1;   
//         }
//         else {
//             return -1;
//         }
//     }
//     return -1;
    
    return searchMe(input, 0, n-1, val);
}