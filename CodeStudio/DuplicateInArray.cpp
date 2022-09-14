// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1


int findDuplicate(vector<int> &arr) 
{
    int n = arr.size();
    
    int ans = 0;
    
    for (int i=0; i<n; i++) {
        ans = (ans ^ arr[i]);
    }
    
    for (int i=1; i<n; i++) {
        ans = (ans ^ i);
    }
    
    return ans;
}
