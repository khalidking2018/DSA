class Solution {
public:
    bool even(int n1,int n2){
        int n=n1-n2;
        if(n%2==0){
            return true;
        }
        return false;
    }
    int countPartitions(vector<int>& nums) {
        int total_sum=0;
        int anns=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        int sub=0;
        int s;
        for(int i=0;i<n-1;i++){
            sub+=nums[i];
            s=total_sum-sub;
            bool e=even(sub,s);
            if(e==true){
              anns++;
            }
            
        }
        return anns;
    }
};