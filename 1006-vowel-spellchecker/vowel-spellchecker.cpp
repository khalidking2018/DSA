class Solution {
public:
    string devowel(string word) {
        for (char &c : word) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                c = '*';
        }
        return word;
    }
    
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exactSet(wordlist.begin(), wordlist.end());
        unordered_map<string,string> caseMap;
        unordered_map<string,string> vowelMap;
        
        for (string w : wordlist) {
            string lower = w;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
            
            if (!caseMap.count(lower)) caseMap[lower] = w;
            string vmask = devowel(lower);
            if (!vowelMap.count(vmask)) vowelMap[vmask] = w;
        }
        
        vector<string> ans;
        for (string q : queries) {
            if (exactSet.count(q)) {
                ans.push_back(q);
                continue;
            }
            
            string lower = q;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
            
            if (caseMap.count(lower)) {
                ans.push_back(caseMap[lower]);
                continue;
            }
            
            string vmask = devowel(lower);
            if (vowelMap.count(vmask)) {
                ans.push_back(vowelMap[vmask]);
                continue;
            }
            
            ans.push_back("");
        }
        return ans;
    }
};
