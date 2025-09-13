class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
        {
            mp[c]++;
        }
        vector<pair<char,int>> freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(),[](auto &a,auto &b){
           return  a.second>b.second;
        });
        string ans="";
        for(auto &p: freq ){
            ans.append(p.second,p.first);
        }
        return ans;
    }
};