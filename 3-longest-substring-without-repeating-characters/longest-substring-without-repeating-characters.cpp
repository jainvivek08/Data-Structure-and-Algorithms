class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>count;
        int i=0;
        int result=0;
        for(int j=0;j<s.size();j++){
            count[s[j]]++;
            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }
            result=max(result,j-i+1);
        }
        return result;
    }
};