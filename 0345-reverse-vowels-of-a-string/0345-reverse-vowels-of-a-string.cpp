class Solution {
public:
    string reverseVowels(string s) {
        string vowel, op;
        if(s == "") return s;
        for(char c: s) {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowel += c;
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                vowel += c;
        }
        int v = vowel.length() - 1;
        char c;
        for(int i = 0; i<s.length(); i++) {
            c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                op += vowel[v--];
            }
            else op += c;
        }
        return op;
    }
};