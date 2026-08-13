class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xori = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
            xori ^= nums[i];
        }
        int ans = k ^ xori;
        return __builtin_popcount(ans);
    }
};