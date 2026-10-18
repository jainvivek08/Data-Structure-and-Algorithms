class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        int prev =-1;
        int maxi =0;
        for(int i=0;i<s.length();i++){
            maxi = max(mp[s[i]], maxi);
            if(maxi==i){
                ans.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return ans;
    }
};