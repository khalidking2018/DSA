class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;  // Stores last index of each character
        int maxLen = 0;
        int start = 0;  // Start of current window

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];

            // If character is found again and it's within the current window
            if (lastIndex.find(currentChar) != lastIndex.end() && lastIndex[currentChar] >= start) {
                // Move start to the right of last occurrence
                start = lastIndex[currentChar] + 1;
            }

            // Update or insert current character's index
            lastIndex[currentChar] = end;

            // Update max length
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};
