class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        if(n==3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin()+1,nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};