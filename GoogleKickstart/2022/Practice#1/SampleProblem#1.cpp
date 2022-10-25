#include<iostream>
using namespace std;

// int maxCd(int totalCandies, int totalKids) {
//     int total = 0;
//     for (int i=0; i<n; i++) {
//         int x = 
//     }
// }

int main() {
    int t;
    cin >> t;
    for (int cs=1; cs<=t; cs++) {
        int n, m;
        cin >> n >> m;
        
        int totalCandies = 0;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            totalCandies += arr[i];
        }
        
        // int maxCandies = maxCd(totalCandies, m);
        // cout << totalCandies/m << endl;
        int x = totalCandies/m;
        cout << "Case #" << cs << ": " << totalCandies - (m * x) << endl;
    }
    return 0;
}