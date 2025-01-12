#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int ans=0;
        while(i<j){
                int w=j-i;
                int cans=min(height[i],height[j])*w;
                ans=max(ans,cans);
        height[i]<height[j]?i++:j--;       
        }
        return ans;
        
    }
};