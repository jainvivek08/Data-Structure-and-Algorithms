class Solution {
public:
    int digit(int n){
        int digitSum=0;
        int squareSum=0;
        while(n>0){
            int val=n%10;
            digitSum+=val;
            squareSum+=val*val;
            n/=10;
        }
        return squareSum-digitSum;
    }
    bool checkGoodInteger(int n) {
        if(digit(n)>=50) return true;
        return false;
    }
};