class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
       
            int  product1= nums[0]*nums[1]*nums[n-1];
            int product2= nums[n-1]*nums[n-2]*nums[n-3]; 
        
        return max(product1 , product2);
    }
};
