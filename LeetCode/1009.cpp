// DOUBT (DONE (BY ME ONLY))

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        else {
            int count = 0;
        
            int temp = n;
            
            while (temp != 0) {
                count++;
                temp >>= 1;
            }
            
            temp = n;
        
            for (int i=0; i<count; i++) {
                int powerOfTwo = pow(2, i);
                
                if (!(temp & 1)) {
                    n = n | powerOfTwo;
                }
                else {
                    n = n ^ powerOfTwo;
                }
                
                temp = temp >> 1;
            }
            return n;
        }
    }
};