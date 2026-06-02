class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int minFinishTime = INT_MAX;

        int n = landStartTime.size();
        int m = waterStartTime.size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                // Option 1: Land ride i -> Water ride j
                int landStart = landStartTime[i];
                int landEnd = landStart + landDuration[i];

                int waterStartAfterLand = max(waterStartTime[j], landEnd);
                int finish1 = waterStartAfterLand + waterDuration[j];

                // Option 2: Water ride j -> Land ride i
                int waterStart = waterStartTime[j];
                int waterEnd = waterStart + waterDuration[j];

                int landStartAfterWater = max(landStartTime[i], waterEnd);
                int finish2 = landStartAfterWater + landDuration[i];

                // Take the minimum finish time
                minFinishTime = min({minFinishTime, finish1, finish2});
            }
        }

        return minFinishTime;
    }
};
