class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long long original = x; 
        long long rev = 0;

        while(x){
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        return original == rev;
    }
};
