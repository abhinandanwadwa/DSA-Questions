// https://www.codingninjas.com/codestudio/problems/find-unique_625159?leftPanelTab=1

bool checkTwice(int arr[], int n, int temp, int currentIdx) {
    for (int i=0; i<n; i++) {
        if (arr[i] == temp && i != currentIdx) {
            return true;
        }
    }
    return false;
}

int findUnique(int *arr, int size)
{
        
        for (int i = 0; i<size; i++) {
            bool isRepeating = checkTwice(arr, size, arr[i], i);
            if (!isRepeating) {
                return arr[i];
            }
        }
    
    return 0;
}