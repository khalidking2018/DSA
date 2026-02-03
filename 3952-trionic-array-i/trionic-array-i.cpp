class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;  // need at least 4 elements

        int i = 0;

        // Phase 1: strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;
        if (i == 0 || i == n - 1) return false;

        // Phase 2: strictly decreasing
        int p = i;
        while (i + 1 < n && nums[i] > nums[i + 1]) i++;
        if (i == p || i == n - 1) return false;

        // Phase 3: strictly increasing
        int q = i;
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;

        return i == n - 1 && q > p;
    }
};
