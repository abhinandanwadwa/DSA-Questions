class Solution {
public:
    int subtractProductAndSum(int n) {
        int productOfDigits = 1, sumOfDigits = 0;
        while (n>0) {
            productOfDigits = productOfDigits*(n%10);
            sumOfDigits = sumOfDigits + (n%10);
            n = n/10;
        }
        
        return (productOfDigits - sumOfDigits);
    }
};