class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<m && j<n){
            if(s[j]>=g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};