class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        vector<int> v(r+1);
        for (int i=0; i<r+1; i++) {
            v[i] = arr[i];
        }
        sort(v.begin(), v.end());
        
        return v[k-1];
    }
};