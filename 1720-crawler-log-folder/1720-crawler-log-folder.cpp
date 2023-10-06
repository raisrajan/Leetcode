class Solution {
public:
    int minOperations(vector<string>& logs) {
        int forward = 0;
        for(string input: logs) {
            if(input == "../") {
                if(forward > 0) forward--;
                else continue;
            }
            else if(input == "./") continue;
            else forward++;
        }
        return forward;
    }
};