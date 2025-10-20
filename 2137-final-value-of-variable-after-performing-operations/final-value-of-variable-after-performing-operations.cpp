class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                if(operations[i][0]=='+'){
                    res++;
                    break;
                }
                if(operations[i][0]=='-'){
                    res--;
                    break;
                }
                if(operations[i][1]=='+'){
                    res++;
                    break;
                }
                else{
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};