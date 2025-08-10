class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0; // position to write in chars
        int read = 0;  // position to read from chars

        while (read < n) {
            char currentChar = chars[read];
            int count = 0;

            // Count how many times currentChar repeats
            while (read < n && chars[read] == currentChar) {
                read++;
                count++;
            }

            // Write the character
            chars[write++] = currentChar;

            // If count > 1, write its digits
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }

        return write; // new length
    }
};
