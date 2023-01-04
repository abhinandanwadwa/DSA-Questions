class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();

        int ans = columnTitle[n-1] - 64;

        for (int i=1; i<n; i++) {
            int current = columnTitle[n-i-1];
            int actualValue = current - 64;
            cout << actualValue << endl;
            ans += pow(26, i)*actualValue;
        }
        return ans;
    }
};