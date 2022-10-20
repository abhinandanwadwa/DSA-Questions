class Solution {
private:
    bool allNine(vector<int>& digits) {
        int n = digits.size();
        for (int i=0; i<n; i++) {
            if (digits[i] != 9) {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> plusOne(vector<int>& digits) {
        // Special Case
        int n = digits.size();
        if (allNine(digits)) {
            vector<int> specialAns;
            specialAns.push_back(1);
            for (int i=0; i<n; i++) {
                specialAns.push_back(0);
            }
            return specialAns;
        }

        // Normal Case
        int carry = 0;
        vector<int> ans(n);
        for (int i=n-1; i>=0; i--) {
            int currentSum = 0;
            if (i == n-1) {
                currentSum = 1;
            }
            int currentDigit = digits[i];
            currentSum += carry + currentDigit;
            carry = 0;
            if (currentSum > 9) {
                carry = 1;
                currentSum %= 10;
            }
            ans[i] = currentSum;
        }
        return ans;
    }
};