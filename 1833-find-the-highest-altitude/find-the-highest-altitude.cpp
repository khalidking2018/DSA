class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int max=0;
        int p=0;
        for(int i=0;i<n;i++){
            p+=gain[i];
            if(p>max){
                max=p;
            }

        }
        return max;
    }
};