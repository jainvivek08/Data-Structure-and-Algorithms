
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int j=k-1;
        unordered_map<int,int>mp;
        while(j<n){
            unordered_map<int,int>freq;
            for(int x = i; x <= j; x++) {
                freq[nums[x]]++;
            }
            for(auto it:freq){
                mp[it.first]++;
            }
            i++;
            j++;
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second==1) {
                ans=max(ans,it.first);
            }
        }
        return ans;
    }
}; 