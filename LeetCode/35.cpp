class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n-1;
        while (s <= e) {
            int mid = (s + e)/2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                e = mid - 1;
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
        }
        return s;
    }
};