class Solution {
public:
    bool isVowel(char ch){
        ch=tolower(ch);
        return (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
    }
    string sortVowels(string s) {
        string vo;
        for(auto &ch : s){
            if(isVowel(ch)){
                vo.push_back(ch);
            }
        }
        sort(begin(vo),end(vo));
       int  j=0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                s[i]=vo[j];
                j++;
            }
        }
        return s;
    }
};