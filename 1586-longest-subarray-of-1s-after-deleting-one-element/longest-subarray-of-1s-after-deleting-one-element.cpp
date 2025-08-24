// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int n=nums.size();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int one=0;
//             int zero=0;
//             for(int j=i;j<n;j++)
//             {
//                if(nums[j]==1){
//                 one++;
//                }
//                else{
//                 zero++;
//                }
//                if(zero <= 1){
//                 ans=max(one,ans);
//                }
//                else{
//                 break;
//                }
//             }
//         }
//         return ans==n ? ans-1: ans;
//     }
// };

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, zeroCount = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) 
                zeroCount++;

            // Shrink window if more than 1 zero
            while (zeroCount > 1) {
                if (nums[left] == 0) 
                    zeroCount--;
                left++;
            }

            // Window length is (right - left), because we must delete one element
            ans = max(ans, right - left);
        }

        return ans;
    }
};
