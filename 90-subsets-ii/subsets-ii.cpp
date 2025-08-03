// class Solution {
// public:
//     void getAllSubsets(vector<int>& nums,vector<int> ans,vector<vector<int>> &allSubsets,int i){
//         if(i==nums.size()){
//             allSubsets.push_back(ans);
//             return;
//         }

//         ans.push_back(nums[i]);
//         getAllSubsets(nums,ans,allSubsets,i+1);

//         ans.pop_back();
        
//         int idx=i+1;
//         while(idx < nums.size() && nums[idx]==nums[idx-1]) idx++;

//         getAllSubsets(nums,ans,allSubsets,idx);
//     }

    

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> allSubsets;
//         vector<int> ans;

//         getAllSubsets(nums,ans,allSubsets,0);
//         return allSubsets;
//     }
// };



class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current);

        for (int i = start; i < nums.size(); ++i) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i - 1]) continue;

            current.push_back(nums[i]);
            backtrack(i + 1, nums, current, result);
            current.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Important: sort to bring duplicates together
        vector<vector<int>> result;
        vector<int> current;

        backtrack(0, nums, current, result);
        return result;
    }
};
