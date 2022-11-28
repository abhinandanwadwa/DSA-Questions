#include <bits/stdc++.h>

// int countStairs(int n, int currentStair) {
//     if (n == currentStair) {
//         return 0;
//     }
//     if (n - currentStair == 1) {
//         return 1;
//     }
//     if (n - currentStair == 2) {
//         return 2;
//     }
//     return countStairs(n, currentStair + 1) + countStairs(n, currentStair + 2);
// }


// int countStairs(int n, int currentStair) {
// //     if (currentStair < 0) {
// //         return 0;
// //     }
//     if (currentStair == 0) {
//         return 0;
//     }
//     if (currentStair == 1) {
//         return 1;
//     }
//     if (currentStair == 2) {
//         return 2;
//     }
//     return countStairs(n, currentStair - 1) + countStairs(n, currentStair - 2);
// }

int countDistinctWays(int nStairs) {
//     if (nStairs == 0) {
//         return 1;
//     }
//     return countStairs(nStairs, nStairs);
    
    if (nStairs < 0) {
        return 0;
    }
    if (nStairs == 0) {
        return 1;
    }
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}