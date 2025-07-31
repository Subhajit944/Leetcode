class Solution {
public:
    double myPow(double x, int n) {
        long long  binFrom = n;

        if(binFrom < 0) {
            x = 1/x;
            binFrom = - binFrom;
        }
        double ans = 1;

        while(binFrom > 0) {
            if(binFrom % 2 == 1){
                ans *= x;
            }

            x *= x;
            binFrom /= 2;
        }
        return ans;
    }
};