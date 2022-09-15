// https://leetcode.com/problems/find-all-duplicates-in-an-array/



class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
    
        
        for (int i=0; i<n-1; i++) {
            if (i == 0) {
                if (nums[0] == nums[1]) {
                    ans.push_back(nums[0]);
                }
            }
            else if (i != n-1) {
                if (nums[i] == nums[i+1] && nums[i] != nums[i-1]) {
                    ans.push_back(nums[i]);
                }
            }
        }
        
        
        return ans;
        
            
    }
};