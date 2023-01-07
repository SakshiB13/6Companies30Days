class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        int pwr = 5;
        while((n/pwr)>0){
            ans += (n/pwr);
            pwr*=5;
        }
        return ans;
    }
};