class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
         return false;
       int logValue=log10(n)/log10(3);
       return pow(3,logValue)==n;
    }
};