class Solution {
public:
    bool isPowerOfFour(int n) {
     return n>0 && (n&(n-1))==0 && (n&0x555555555)!=0;
    }
};