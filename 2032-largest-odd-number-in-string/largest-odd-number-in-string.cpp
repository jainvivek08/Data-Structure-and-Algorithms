class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int i=n-1;
        while(i>=0){
            int lastdig=num[i]-'0';
            if(lastdig%2!=0) return num.substr(0,i+1);
            i--;
        }
        return "";
    }
};