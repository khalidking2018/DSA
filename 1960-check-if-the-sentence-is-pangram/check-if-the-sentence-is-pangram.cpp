class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> m;
        
        // Count occurrences of each character
        for (char i : sentence) {
            if (i >= 'a' && i <= 'z') { 
                m[i]++;
            }
        }
        
        // Check if all 26 letters are present
        for (char c = 'a'; c <= 'z'; c++) {
            if (m.find(c) == m.end()) { // letter not found
                return false;
            }
        }
        
        return true;
    }
};
