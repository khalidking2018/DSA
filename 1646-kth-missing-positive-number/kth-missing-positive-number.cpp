class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int num=1;
        int n=nums.size();
        int i=0;
        while(k>0 && i<n){
            if(nums[i] != num)
            {
               k--;
            }else{
                i++;
            }
           num++;
        }
        while(k--){
            num++;
        }
        return num-1; 
    }
};