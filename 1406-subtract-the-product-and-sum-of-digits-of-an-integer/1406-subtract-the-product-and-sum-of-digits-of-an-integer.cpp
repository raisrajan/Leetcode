class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mul = 1;
        while(n) {
            sum += n%10;
            mul *= n%10;
            n = n/= 10;
        }
        return mul - sum;
    }
};