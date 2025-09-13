class Solution {
public:
    int maxDepth(string s) {
      int ans=0;
      int openbraket=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            openbraket++;
        }else if(s[i]==')'){
            openbraket--;
        }
        ans=max(ans,openbraket);
      } 
      return ans; 
    }
};