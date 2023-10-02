class Solution {
public:
    bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            if (isPalindrome(s)) {
                return s;
            }
        }
        return "";
    }
};