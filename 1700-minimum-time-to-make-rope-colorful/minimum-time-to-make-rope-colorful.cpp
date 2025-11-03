class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int prevMax = neededTime[0];
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] == colors[i-1]) {
                ans += min(prevMax, neededTime[i]);
                prevMax = max(prevMax, neededTime[i]);
            } else {
                prevMax = neededTime[i];
            }
        }
        return ans;
    }
};
