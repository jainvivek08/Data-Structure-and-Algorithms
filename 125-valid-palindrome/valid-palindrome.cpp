class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch>='A' && ch<='Z'){
                ch=ch+('a'-'A');
            }
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')) temp+=ch;
        }
        int i=0;
        int j=temp.length()-1;
        while(i<=j){
            if(temp[i]!=temp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};