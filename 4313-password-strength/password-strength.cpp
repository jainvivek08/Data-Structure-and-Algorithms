class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        unordered_set<char>st;
        for(char ch: password){
            st.insert(ch);
        }
        for(auto it=st.begin();it!=st.end();it++){
            if(*it>='a' && *it<='z') ans+=1;
            else if(*it>='A' && *it<='Z') ans+=2;
            else if(*it>='0' && *it<='9') ans+=3;
            else ans+=5;
        }
        return ans;
    }
};