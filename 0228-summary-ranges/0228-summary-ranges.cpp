class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> op;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int start = nums[i];
        while (i + 1 < n && nums[i] + 1 == nums[i + 1]) {
            i++;
        }
        int end = nums[i];
        if (start == end) {
            op.push_back(to_string(start));
        } else {
            op.push_back(to_string(start) + "->" + to_string(end));
        }
    }
    return op;
}

};