class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0, rsum = 0;
        for(int j: nums) rsum += j;
        for(int i=0; i<nums.size(); i++) {
            rsum -= nums[i];
            if(lsum == rsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};