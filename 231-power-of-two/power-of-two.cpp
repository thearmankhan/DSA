class Solution {
public:
    bool isPowerOfTwo(int n) {//without loop/recursion
        if(n<=0)
        return false;
        int logValue=log2(n);
        return pow(2,logValue)==n;
    }
};