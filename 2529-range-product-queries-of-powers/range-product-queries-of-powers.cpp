class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int M = 1e9 + 7;
        vector<int> res;
        vector<int> powers;

        // Extract powers of two from n
        for (int i = 0; i < 32; i++) {
            if ((n & (1 << i)) != 0) {
                powers.push_back(1 << i);
            }
        }

        // Process each query
        for (auto &querie : queries) {
            int start = querie[0];
            int end = querie[1];
            long long pro = 1;

            for (int i = start; i <= end; i++) {
                pro = (pro * powers[i]) % M;
            }

            res.push_back((int)pro);
        }

        return res;
    }
};
