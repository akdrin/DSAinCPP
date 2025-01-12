#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            for(int j=i;j<n-1;j++){
                if(req==nums[j+1]){
                ans.push_back(i);
                ans.push_back(j+1);
                break;}
            } 
        }
        return ans;
        
    }
};
