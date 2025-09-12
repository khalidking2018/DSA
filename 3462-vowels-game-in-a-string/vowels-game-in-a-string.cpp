class Solution {
public:
    bool isVowel(char ch)
    {
        int c=tolower(ch);
        return (c=='a' || c=='e' || c=='o'|| c=='i'  || c== 'u');
    }
    bool doesAliceWin(string s) {
        int n=s.size();
        int c=0;
        for(int i =0;i< n;i++){
            if(isVowel(s[i])) c++;
        }
        if(c==0) return false;
        if(c%2 == 0) return true;
       return true;
    }
};