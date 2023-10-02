class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int g = 0, max = 0;
        for(int i=0; i<gain.size(); i++) {
            g += gain[i];
            if(g>max) max = g;
        }
        return max;
    }
};