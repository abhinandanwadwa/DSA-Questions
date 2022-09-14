// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1


int findDuplicate(vector<int> &arr) 
{
    int n = arr.size();
    
    int expectedSum = (n*(n+1))/2, originalSum = 0;
    
    for (int i=0; i<n; i++) {
        originalSum += arr[i];
    }
    
    int ans = n - (expectedSum - originalSum);
    
    return ans;
}
