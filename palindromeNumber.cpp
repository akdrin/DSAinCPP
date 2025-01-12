#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        int rem=0, reverse=0; int num=x;
        if(x<0) return 0;
        while(num!=0){
            rem=num%10;
            num=num/10;
            if(reverse>INT_MAX/10) return 0;
            reverse=reverse*10+rem;
        }
        if(reverse==x) return 1;
        return 0;
    }
};
