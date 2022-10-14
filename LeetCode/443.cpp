class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        vector<char> ans;
        for (int i=0; i<n; i++) {
            char a = chars[i];
            int groupSize = 1;
            int x = i+1;
            while (x < n && chars[x] == a) {
                groupSize++;
                x++;
            }
            if (groupSize == 1) {
                ans.push_back(a);
            }
            else {
                ans.push_back(a);
                int tempGs = groupSize;
                vector<char> tempNumbers;
                while (tempGs != 0) {
                    int lastDigit = tempGs % 10;
                    char gsChar = '0' + lastDigit;
                    tempNumbers.push_back(gsChar);
                    tempGs /= 10;
                }
                for (int k=tempNumbers.size()-1; k>=0; k--) {
                    ans.push_back(tempNumbers[k]);
                }
                // ans.push_back(to_string(groupSize));
                i += groupSize-1;
            }
        }
        chars = ans;
        return ans.size();
    }
};