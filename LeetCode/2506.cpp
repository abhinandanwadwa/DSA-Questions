class Solution {
private:
    bool isSimilar(string first, string second) {
        bool arr1[26] = {0};
        bool arr2[26] = {0};

        for (int i=0; i<first.length(); i++) {
            char currentChar = first[i];
            arr1[currentChar - 'a'] = true;
        }

        for (int i=0; i<second.length(); i++) {
            char currentChar = second[i];
            arr2[currentChar - 'a'] = true;
        }

        for (int i=0; i<26; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;
    }
public:
    int similarPairs(vector<string>& words) {
        int n = words.size();

        int count = 0;

        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                string first = words[i];
                string second = words[j];

                if (isSimilar(first, second)) {
                    count++;
                }
            }
        }
        return count;
    }
};