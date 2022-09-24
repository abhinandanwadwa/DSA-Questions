string reverseWord(string str){
    string ans;
    int n = str.size();
    for (int i=n-1; i>=0; i--) {
        ans += str[i];
    }
    return ans;
}