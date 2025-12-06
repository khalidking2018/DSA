class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_count=0;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
            count++;
           }
           else if(nums[i]== 0){
            max_count=max(count,max_count);
            count=0;
           }
        }
        max_count=max(count,max_count);
        return max_count;
    }
};