class Solution {
public:
   void func(int ind,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& arr){
    if(ind==candidates.size()){
        if(target==0) ans.push_back(arr);
        return;
    }

    //taken
    if(candidates[ind]<=target){
        arr.push_back(candidates[ind]);
        func(ind,target-candidates[ind],candidates,ans,arr);
        arr.pop_back();
    }

    //not taken
    func(ind+1,target,candidates,ans,arr);
   }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(0,target,candidates,ans,arr);
        return ans;
    }
};