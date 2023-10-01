#include <stack>
class Solution {
public:
    stack<char> st;
    char ch;
    bool isValid(string s) {
        for(int i=0; i<s.length(); i++) {
            ch = s[i];
            if(ch == '(' || ch == '{' || ch == '[') st.push(ch);
            else if (!st.empty()) {
                if(ch == ']' && st.top() == '[') st.pop();
                else if(ch == ')' && st.top() == '(') st.pop();
                else if(ch == '}' && st.top() == '{') st.pop();
                else return false;
            }
            else return false;
        }
        if(st.empty()) return true;
        else return false;
    }
};