class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        vector<int> mod1, mod2;

        for (int x : nums) {
            sum += x;
            if (x % 3 == 1) mod1.push_back(x);
            if (x % 3 == 2) mod2.push_back(x);
        }

        if (sum % 3 == 0) return sum;

        sort(mod1.begin(), mod1.end());
        sort(mod2.begin(), mod2.end());

        int r = sum % 3;
        int ans = 0;

        if (r == 1) {
            int op1 = (mod1.size() >= 1 ? sum - mod1[0] : 0);
            int op2 = (mod2.size() >= 2 ? sum - mod2[0] - mod2[1] : 0);
            ans = max(op1, op2);
        } else {
            int op1 = (mod2.size() >= 1 ? sum - mod2[0] : 0);
            int op2 = (mod1.size() >= 2 ? sum - mod1[0] - mod1[1] : 0);
            ans = max(op1, op2);
        }

        return ans;
    }
};
