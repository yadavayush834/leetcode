class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int length = nums.size(); 
        for(int i = 0 ; i< nums.size(); i++){
            
            int t = abs(nums[i]);
            if(nums[t] < 0){
                return t;
            }
            nums[t] = - nums[t];
        }
        return length; 
    }
};