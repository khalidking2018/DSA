class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string next = "";
            for (int i = 0; i < s.size() - 1; i++) {
                int d1 = s[i] - '0';
                int d2 = s[i + 1] - '0';
                int newDigit = (d1 + d2) % 10;
                next += to_string(newDigit);
            }
            s = next;
        }
        return s[0] == s[1];
    }
};
