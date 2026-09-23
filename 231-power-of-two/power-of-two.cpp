class Solution {
public:
    bool isPowerOfTwo(int n) {//without loop/recursion
        if(n<=0)
        return false;
        int logValue=log2(n);
        return pow(2,logValue)==n;
    }
};

// *Power of 2 ke binary mein sirf ONE 1 hota hai, baaki sab 0 hote hain.*
// 1 = 2⁰ → binary 1
// 2 = 2¹ → binary 10
// 4 = 2² → binary 100
// 8 = 2³ → binary 1000
// 16 = 2⁴ → binary 10000

//  logic if (N > 0 && (N & (N - 1)) == 0)
