// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int lastNonZeroFoundAt = 0;

//         // If the current element is not 0, then we need to
//         // append it just in front of last found non-zero element we found.
//         for (int i = 0; i < n; i++) {
//             if (nums[i] != 0) {
//                 swap(nums[lastNonZeroFoundAt++], nums[i]);
//             }
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int last_seen_zero=0,i=0;
        while(i<n){
            if(nums[i] != 0){
                swap(nums[last_seen_zero++],nums[i]);
            }
            i++;
        }
   }
};
