class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto it:nums){
           ans[it]++;
        }
        int n;
        for(auto it:ans){
            if(it.second==1){
               n=it.first;
            }
        }
        return n;
    }
};