class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int> posFreq(1001, 0);
        vector<int> negFreq(1001, 0);
        
        for (int i=0; i<n; i++) {
            if (arr[i] >= 0) {
                posFreq[arr[i]]++;
            }
            else {
                negFreq[-arr[i]]++;
            }
        }
        
        vector<int> ans(2002);
        
        for (int i=0; i<1001; i++) {
            ans.push_back(posFreq[i]);
            ans.push_back(negFreq[i]);
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        
        
        for (int i=0; i<2001; i++) {
            if (ans[i] == ans[i+1] && ans[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};