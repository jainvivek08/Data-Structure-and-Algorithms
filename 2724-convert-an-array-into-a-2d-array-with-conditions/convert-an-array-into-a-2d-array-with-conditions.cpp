class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int rows=0;
        for(auto it:mp){
            rows=max(it.second,rows);
        }
        vector<vector<int>>ans(rows);
        for(auto it:mp){
            int value=it.first;
            int count=it.second;
            for(int i=0;i<count;i++){
                ans[i].push_back(value);
            }
        }
        return ans;
    }
};