class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;

        // Start from the end and skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the characters of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
