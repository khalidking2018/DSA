class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int s=n/2;
        unordered_map<int,int> un;
        for(auto i:nums){
            un[i]++;
        }
        for(auto i: un){
            if(i.second==s) 
              return i.first;
        }
        return 0;
    }
};