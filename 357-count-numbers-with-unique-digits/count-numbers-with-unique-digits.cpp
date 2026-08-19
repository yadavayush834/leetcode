class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans = 0; 
        int current = 1 ; 
        if(n == 0) return 1;
        for(int digit = 1 ; digit <= n ; digit++){
            if(digit == 1){
                current = 10 ;
            }
            else if(digit == 2){
                current = 9*9 ;
            }
            else{
                current = current * (11 - digit);
            }
            ans += current;
        }
        return ans;
    }
};