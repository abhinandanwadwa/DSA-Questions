class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i=0; i<26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        // Creating a Character Count Array
        for (int i=0; i<s1.length(); i++) {
            count1[s1[i] - 'a']++;
        }

        // Traverse s2 string in window of size => s1.length() and compare
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        // Running manually for the first window
        while (i < windowSize && i < s2.length()) {
            count2[s2[i] - 'a']++;
            i++;
        }

        if (checkEqual(count1, count2)) {
            return true;
        }

        // Aage ke liye process karo
        while (i < s2.length()) {
            // Incrementing the new element in the window
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            // Decrementing the old element who was in the window
            char oldChar = s2[i-windowSize];
            index = oldChar - 'a';
            count2[index]--;

            i++;

            if (checkEqual(count1, count2)) {
                return true;
            }
        }
        return false;
    }
};