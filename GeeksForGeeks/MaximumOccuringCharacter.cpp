class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int n = str.size();
        vector<int> freq(150, 0);
        for (int i=0; i<n; i++) {
            int ascii = str[i];
            freq[ascii]++;
        }
        
        int maxFreqIndex = 0;
        
        for (int i=0; i<freq.size(); i++) {
            if (freq[i] > freq[maxFreqIndex]) {
                maxFreqIndex = i;
            }
        }
        char ans = maxFreqIndex;
        return ans;
     }

};