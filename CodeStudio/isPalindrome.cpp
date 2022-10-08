#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    int m = s.length();
    string ans;
    
    for (int i=0; i<m; i++) {
        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            if ((s[i] >= 65 && s[i] <= 90)) {
                s[i] = s[i] + 32;
                ans += s[i];
            }
            else {
                ans += s[i];
            }
        }
    }
    
    int n = ans.length();
    int st = 0, et = n-1;
    
    while (st <= et) {
        if (ans[st] != ans[et]) {
            return false;
        }
        st++;
        et--;
    }
    return true;
}