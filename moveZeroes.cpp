class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1; i++){
                int j=nums.size()-1;
                for(int k=0;k<nums.size()-1; k++){
                if(nums[k]==0 && nums[k+1]!=0) swap(nums[k],nums[k+1]);
                if(nums[j]!=0 && nums[j-1]==0) swap(nums[j],nums[j-1]);
                j--;
            }
        }
        
    }
};
