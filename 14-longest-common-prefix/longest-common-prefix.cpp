class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";
        sort(strs.begin(), strs.end());   // sort the vector
        int n = strs.size();

        string first = strs[0];
        string last  = strs[n - 1];

        // Compare only first and last string
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};
