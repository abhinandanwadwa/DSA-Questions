class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        vector<int> ans;
        int zerosCount = 0;
        for (int i=0; i<n; i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
            else {
                zerosCount++;
            }
        }

        for (int i=0; i<zerosCount; i++) {
            ans.push_back(0);
        }
        nums = ans;
    }
};