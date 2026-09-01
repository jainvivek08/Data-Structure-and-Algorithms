class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){ // agr start me he aayega toh aage badh jayenge 
                temp+=s[i];
            }
            else if(!temp.empty() && temp.back()!=' '){
                temp+=' ';
            }
        }
        if(!temp.empty() && temp.back() == ' ') {
            temp.pop_back();
        }
        s=temp;
        reverse(s.begin(),s.end());
        int start=0;
        for(int i=start;i<=s.length();i++){
            if(i==s.length() || s[i]==' '){
                if(start<i){
                    reverse(s.begin()+start,s.begin()+i);
                }
                start=i+1;
            }
        }
        return s;
    }
};