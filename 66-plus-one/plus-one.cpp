

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
       
        for (int i = n - 1; i >= 0; i--) {
            // If the current digit is less than 9, just increment it and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            digits[i] = 0;
        }
        
       
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
