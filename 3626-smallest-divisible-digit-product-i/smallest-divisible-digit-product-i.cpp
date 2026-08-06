class Solution {
public:
    int smallestNumber(int n, int t) {
       while(true){
        if (n>=0 && n<=9){
            if(n%t == 0) return n;
        }
        if(n>=10 && n<=99){
            int f_dig=n/10;
            int s_dig=n%10;
            int sum=f_dig*s_dig;
            if(sum%t == 0) return n;

        }
        if(n==100){
            if(0%t == 0) return n;
        }
        n++;
       }
        return 0;
    }
};