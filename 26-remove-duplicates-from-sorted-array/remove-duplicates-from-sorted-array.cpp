class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int> st;
        for(auto &it: nums){
            st.insert(it);
        }
        int index=0;
        for(auto &it:st){
            nums[index++] = it; 
            
        }
        return index;
    }
};