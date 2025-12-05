class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pick = 0;
        
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                pick++;
            }
        }
        
        return pick <= 1;
    }
};
