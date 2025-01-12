#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
    double ans = 1;
        bool sign = false;
        long long power = n;
        if(power<0){
            sign = true;
            power = -power;
        }
        while(power>0){ 
            if(power&1) ans = ans*x;
            x = x*x;
            power>>=1;
        }
        return sign==true? 1.0/ans: ans;
    }
};