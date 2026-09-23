class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
         return false;
       int logValue=log10(n)/log10(3);
       return pow(3,logValue)==n;
    }
};

// another best me
// 32-bit signed integer range mein 3 ki sabse badi power:
// 3^19 = 1162261467
// 3^19 % 3^1 = 0
// 3^19 % 3^2 = 0
// 3^19 % 3^3 = 0
// 3^19 % 3^4 = 0
// ...
// 3^19 % 3^19 = 0
// n > 0 && 1162261467 % n == 0
// true && true
// true
