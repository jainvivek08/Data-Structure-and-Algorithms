class Solution {
public:
    int digit(int n){
        int sum=0;
        int product=1;
        while(n>0){
            int d=n%10;
            sum+=d;
            product*=d;
            n/=10;
        }
        return sum+product;
    }
    bool checkDivisibility(int n) {
        if(n%digit(n)==0) return true;
        return false;
    }
};