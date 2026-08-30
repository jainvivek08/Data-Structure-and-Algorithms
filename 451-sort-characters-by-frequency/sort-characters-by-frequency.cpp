class Solution {
public:
    string frequencySort(string s) {
        string ans="";  // IMP CONCEPTS 
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        vector<pair<char,int>>v;
        for(auto it:mp){
            v.push_back({it.first, it.second});
        }

        sort(v.begin(),v.end(), [](auto &a, auto&b){ 
            return a.second>b.second;
        });
        for(auto it:v){
            ans+=string(it.second, it.first); // string(count, character) ***
        }
        return ans;
    }
};