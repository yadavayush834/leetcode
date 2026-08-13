class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xori = start ^ goal;
        int ans = __builtin_popcount(xori);
        return ans; 
    }
};