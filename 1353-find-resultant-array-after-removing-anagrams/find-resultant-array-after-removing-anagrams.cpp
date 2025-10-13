#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkAnagram(string w, string s) {
        if (w.size() != s.size()) return false;
        sort(w.begin(), w.end());
        sort(s.begin(), s.end());
        return w == s;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            if (checkAnagram(words[i], ans.back())) {
                continue;  // skip anagrams of previous word
            } else {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
