class Solution {
public:
typedef pair<int, int> P; //freq, element
    int findTopXSum(unordered_map<int, int>& mp, int x) {
        //min-heap
        priority_queue<P, vector<P>, greater<P>> pq; //O(k) space

        for(auto &it : mp) { //O(k * log(k))
            pq.push({it.second, it.first});

            if(pq.size() > x) {
                pq.pop(); //remove smallest element from the top
            }
        }

        int sum = 0;
        while(!pq.empty()) { //K
            auto [freq, val] = pq.top(); //
            pq.pop(); //log(k)

            sum += freq*val;
        }

        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
       int n=nums.size();
       unordered_map<int,int> mp;
       vector<int> ans;
       int i=0;
       int j=0;
       while(j<n){
        mp[nums[j]]++;
        if(j-i+1 == k){
           ans.push_back(findTopXSum(mp,x));
           mp[nums[i]]--;
           if(mp[nums[i]] == 0){
            mp.erase(nums[i]);
           }
           i++;
        }
        j++;
       } 
        return ans;
    }
   
};