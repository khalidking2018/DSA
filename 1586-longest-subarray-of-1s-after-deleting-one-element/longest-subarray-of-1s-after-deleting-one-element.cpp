class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int one=0;
            int zero=0;
            for(int j=i;j<n;j++)
            {
               if(nums[j]==1){
                one++;
               }
               else{
                zero++;
               }
               if(zero <= 1){
                ans=max(one,ans);
               }
               else{
                break;
               }
            }
        }
        return ans==n ? ans-1: ans;
    }
};