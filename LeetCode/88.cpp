class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int a = 0, b = 0;

        while (a < m || b < n) {
            if (b >= n) {
                ans.push_back(nums1[a++]);
            }
            else if (a >= m) {
                ans.push_back(nums2[b++]);
            }
            else if (nums1[a] < nums2[b]) {
                ans.push_back(nums1[a++]);
            }
            else if (nums1[a] > nums2[b]) {
                ans.push_back(nums2[b++]);
            }
            else {
                ans.push_back(nums1[a++]);
            }
        }
        nums1 = ans;
    }
};