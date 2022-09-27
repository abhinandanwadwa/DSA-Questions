void rotate(int arr[], int n)
{
    int last_element = arr[n-1];
    int prev_element = arr[0];
    for (int i=1; i<n; i++) {
        int current = arr[i];
        arr[i] = prev_element;
        prev_element = current;
    }
    arr[0] = last_element;
}