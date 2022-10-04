#include <bits/stdc++.h>

string setFirstSmallestBit(string S) {
    int n = S.length();
    for (int i=0; i<n; i++) {
        if (S[i] == '0') {
            S[i] = '1';
            return S;
        }
    }
}

string binaryShopping(string S, int P)
{
    int n = S.length();
    
    if (S == "1") {
        return S;
    }
    
    int noOfOperations = 0;
    
    for (int i=n-1; i>=0; i--) {
        if (noOfOperations == 2) {
            break;
        }
        if (S[i] == '1') {
            S[i] = '0';
            noOfOperations++;
        }
    }
    
    string ans;
    
    if (noOfOperations == 1) {
        ans = setFirstSmallestBit(S);
        return ans;
    }
    
    return S;
}