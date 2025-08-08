class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int> p;
        unordered_map<int,int> um;
        for(auto &it: nums){
            um[it]++;
        }
        priority_queue<p,vector<p>,greater<p>> hip;
        for(auto &it: um){
            int value=it.first;
            int feq=it.second;
            hip.push({feq,value});
            if(hip.size()>k){
                hip.pop();
            }
        }
        vector<int> ans;
        while(! hip.empty()){
            ans.push_back(hip.top().second);
            hip.pop();
        }
        return ans;
    }
};