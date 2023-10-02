#include <string>
#include <stack>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int val, f, s;
        stack<int> op;
        for(string i: tokens) {
            if(i == "+" || i == "-" || i == "*" || i == "/") {
                s = op.top();
                op.pop();
                f = op.top();
                op.pop();
                if(i == "+") op.push(f+s);
                else if(i == "-") op.push(f-s);
                else if(i == "*") op.push(f*s);
                else if(i == "/" && s != 0) op.push(f/s);
            }
            else {
                val = std::stoi(i);
                op.push(val);
            }
        }
        return op.top();
    }
};