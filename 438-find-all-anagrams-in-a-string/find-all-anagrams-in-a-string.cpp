class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        unordered_map<char,int>pCount,winCount;
        for(char ch:p){
            pCount[ch]++;
        }
        int i=0;
        int len=p.length();
        for(int j=0;j<s.length();j++){
            winCount[s[j]]++;
            if(j-i+1>len){
                winCount[s[i]]--;
                if(winCount[s[i]]==0) winCount.erase(s[i]);
                i++;
            }
            if(j-i+1==len && winCount==pCount){
                result.push_back(i);
            }
        }
        return result;
    }
};