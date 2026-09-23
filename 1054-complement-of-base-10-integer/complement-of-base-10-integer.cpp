 // method one to solve it
class Solution {
public:
    int bitwiseComplement(int n) {
       int ans=0;
       if(n==0)// edge case
       return 1;
       for(int i=0; n>0; i++){
        ans+=pow(2,i)*(!(n%2));
        n/=2;
       }
       return ans;
    }
};
// method two  to solve it
class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;
        if(n==0)
            return 1;
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        int ans = ~n&mask;
        return ans;
    }
};
