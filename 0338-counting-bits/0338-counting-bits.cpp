class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> op;
        op.push_back(0);
        if(n == 0) return op;
        op.push_back(1);
        if(n == 1) return op;
        for(int i=2; i<=n; i++) {
            int t = 1, j = i;
            while(j != 1) {
                if(j%2 != 0) t++;
                j/= 2;
            }
            op.push_back(t);
        }
        return op;
    }
};