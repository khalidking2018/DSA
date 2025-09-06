class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size(),i=0;
        while(i<n){
            if(nums[i]==target) ans.push_back(i);
            i++;
        }
        return ans;
    }
};