class Solution {
public:
    int sq(int n) { 
        return n * n;
    }
    int sum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += sq(num % 10);

            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while (n != 1 && st.find(n) == st.end()) {
            st.insert(n);
            n = sum(n);
        }
        return n == 1;
    }
};