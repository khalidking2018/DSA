class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string ans = "";
        for (int i = 0; i <= n - 3; i++) {
            
            string sub = num.substr(i, 3);

            if (sub[0] == sub[1] && sub[1] == sub[2]) {
                if (sub > ans) {
                    ans = sub;
                }
            }
        }
        return ans;
    }
};