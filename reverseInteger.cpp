#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int rem;
        while(x){
            rem=x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            else {ans=ans*10+rem;}
           
        }
        return ans;
   
    }
};