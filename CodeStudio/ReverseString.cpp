#include <bits/stdc++.h>

string reverseStr(string str, int n) {
    // Base Case
    if (n == 0) {
        return "";
    }

    // Processing and Recursive Relation
    return (reverseStr(str.substr(1, str.length() - 1), n-1) + str[0]);
}


string reverseString(string str)
{
    return reverseStr(str, str.length());
//     int n = str.size();
//     // Base Case
//     if (n == 0) {
//         return "";
//     }
    
//     // Recursive Call and Processing
//     return (str.substr(1, n-1) + str[0]);
}