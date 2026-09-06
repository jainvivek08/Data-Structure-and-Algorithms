class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>sp;
        unordered_map<char,int>tp;
        for(int i=0;i<s.size();i++){
            if(sp.count(s[i])==0) sp[s[i]]=i;
            if(tp.count(t[i])==0) tp[t[i]]=i;

            if(sp[s[i]]!=tp[t[i]]) return false;
        }
        return true;
    }
};