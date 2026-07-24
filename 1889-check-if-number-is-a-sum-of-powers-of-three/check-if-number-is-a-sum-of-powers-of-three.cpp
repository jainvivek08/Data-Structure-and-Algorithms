class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n != 0) { // Again
            if (n % 3 == 2) return false;
            n /= 3;
        }
        return true;
    }
};