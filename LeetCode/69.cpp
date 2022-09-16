class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = x;
        int ans = -1;
        
        if (x == 0 || x == 1) {
            return x;
        }
        
        if (x == 2147483647) {
            return 46340;
        }
        
        while (s <= e) {
            int mid = (s + ((e - s) / 2));
            int midSquared;
            if (mid > INT_MAX/mid) {
                midSquared = INT_MAX;
            }
            else {
                midSquared = mid * mid;                
            }
            if (midSquared == x) {
                ans = mid;
                return ans;
            }
            else if (midSquared > x) {
                e = mid - 1;
            }
            else {   // midSquared < x
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};