class Solution {
public:
    string reverseWords(string s) {
        int n =s.size();
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string temp="";
            if(i<n && s[i]==' ') i++;
            while(i<n && s[i] != ' '){
                temp+=s[i];
                i++;
            }
            if(!temp.empty()){
                reverse(temp.begin(),temp.end());
                 if (!ans.empty()) ans += " ";
                ans += temp;
            }
        }
        return ans;
    }
};