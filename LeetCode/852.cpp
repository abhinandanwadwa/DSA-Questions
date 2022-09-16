class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0, e = n - 1;
        int ans = arr[0];

        while (s <= e)
        {
            int mid = (s + ((e - s) / 2));

            // if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            //     return mid;
            // }
            if (arr[mid] < arr[mid + 1]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
            
            
            if (e == s) {
                return s;
            }
            // else if (arr[mid] > arr[mid + 1] && arr[mid - 1] > arr[mid]) {
            //     e = mid - 1;
            // }
        }
        return -1;
    }
};