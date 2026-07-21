class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count =0;
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        int mx=INT_MIN;
        for(auto it: mp){
            if(it.second>mx){
                mx=it.second;
                count=it.second;
            }
            else if(it.second==mx) count+=it.second;
        }
        return count;
    }
};