class Solution {
public:
    string reverseWords(string s) {
        vector<string> op;
        string st, temp;
        for(char c: s) {
            if(c == ' ') {
                if(!temp.empty()) {
                    op.push_back(temp);
                }
                temp = "";
            }
            else temp += c;
        }
        if (!temp.empty()) op.push_back(temp);

        for(int i=op.size()-1; i>0; i--) {
            st += op[i];
            if (i > 0) st += ' ';
        }
        return st + op[0];
    }
};