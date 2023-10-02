class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string small, big, op;
        if(word1.length()> word2.length()) {
            big = word1;
            small = word2;
        }
        else {
            big = word2;
            small = word1;
        }
        int i;
        for (i = 0; i < small.length(); i++) {
            op += word1[i];
            op += word2[i];
        }
        while (i < big.length()) {
            op += big[i];
            i++;
        }
        return op;
    }
};