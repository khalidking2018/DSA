// class Solution {
// public:
//     bool isVowel(char ch){
//         char c=ch;
//         return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
//     }
//     int maxFreqSum(string s) {
//         unordered_map<char,int> vowel;
//         unordered_map<char,int> cons;
//         for(char ch: s){
//             if(isVowel(ch)){
//            vowel[ch]++;
//             }
//             else{
//                 cons[ch]++;
//             }
//         }
//         int max_vowel=0;
//         int max_cons=0;
//         for(auto &p: vowel){
//             if(p.second > max_vowel){
//                 max_vowel=p.second;
//             }
//         }
//         for(auto &p: cons){
//             if(p.second > max_cons){
//                 max_cons=p.second;
//             }
//         }
//         return max_vowel+max_cons;
//     }
// };

class Solution {
public:
    bool isVowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }

    int maxFreqSum(string s) {
        unordered_map<char,int> freq;

        // Count frequencies of all characters
        for(char ch: s){
            freq[ch]++;
        }

        int max_vowel = 0, max_cons = 0;

        // Traverse once and separate max values
        for (auto &p : freq) {
            if (isVowel(p.first)) 
                max_vowel = max(max_vowel, p.second);
            else 
                max_cons = max(max_cons, p.second);
        }

        return max_vowel + max_cons;
    }
};
