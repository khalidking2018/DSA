class Solution {
public:
    unordered_set<string> st;   
    void buildset(int n)
    {
        for(int i=0;i<=29;i++)
        {
            string s=to_string(1<<i);
            sort(s.begin(),s.end());
            st.insert(s);
        }
    }
    bool reorderedPowerOf2(int n) {
        if(st.empty()){
            buildset(n);
        }
        string s=to_string(n);
        sort(s.begin(),s.end());
        return st.count(s);
    }
};