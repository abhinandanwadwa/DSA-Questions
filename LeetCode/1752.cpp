class Solution {
public:

    bool allSame(vector<int>& nums) {
        int n = nums.size();
        int start = nums[0];
        for (int i=0; i<n; i++) {
            if (nums[i] != start) {
                return false;
            }
        }
        return true;
    }

    bool check(vector<int>& nums) {
        if (allSame(nums)) {
            return true;
        }
        int n = nums.size();
        int count = 0;
        // if (nums[0] <= nums[1]) {
        //     count++;
        // }
        for (int i=1; i<n; i++) {
            if (nums[i-1] > nums[i]) {
                count++;
            }
        }

        if (nums[n-1] > nums[0]) {
            count++;
        }
        return (count==1);
    }
};