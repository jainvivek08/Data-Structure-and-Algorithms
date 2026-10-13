class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        int max = 0;
        unordered_map<int,int>mp;
        for(int x:nums){
            if(x%2==0) mp[x]++;
        }
        for(auto &it : mp){
            if(it.second > max){
                max = it.second;
                ans = it.first;
            }
            else if(it.second == max && it.first < ans){
                ans = it.first;
            }
        }
        return ans;
    }
};