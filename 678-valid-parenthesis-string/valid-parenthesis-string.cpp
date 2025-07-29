class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open; // for '('
        stack<int> star; // for '*'

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                open.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else if (s[i] == ')') {
                if (!open.empty()) {
                    open.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;
                }
            }
        }

        // Now match remaining '(' with '*' coming after them
        while (!open.empty() && !star.empty()) {
            if (open.top() < star.top()) {
                open.pop();
                star.pop();
            } else {
                // '*' can't come before '(' for valid match
                return false;
            }
        }

        return open.empty();
    }
};
