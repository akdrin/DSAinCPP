class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int start;
        int n=nums.size()-1;
        int sum=nums[0];
        for(int i=1;i<=n;i++){
            start=max(0,i-nums[i]);
            for(int k=start;k<=i;k++){
                sum+=nums[k];
            }
        }
        return sum;
    }
};
