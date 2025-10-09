class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(128, -1); // ASCII character last seen index
        int maxLen = 0, start = 0;

        for (int end = 0; end < s.length(); end++) {
            char c = s[end];
            if (index[c] >= start) {
                start = index[c] + 1; // Move start to avoid duplicate
            }
            index[c] = end;  // Update last seen index
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};
