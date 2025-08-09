class Solution {
public:
    string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    // Reverse the whole string first
    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";

        // Extract each word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word back to original order
        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    // Remove the leading space
    return ans.substr(1);
}
};