class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int n : nums) arr.push_back(to_string(n));
        sort(arr.begin(), arr.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        string result;
        for (auto &s : arr) result += s;
        return result[0] == '0' ? "0" : result;
    }
};
