class Solution {
public:
    vector<pair<int,int>> digitSum(vector<int>& nums){
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            p.push_back({sum, nums[i]});
        }
        return p;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>>v;
        v=digitSum(nums);
        sort(v.begin(), v.end()); 
        unordered_map<int,int> pos;  // ***
        for(int i = 0; i < n; i++){
            pos[v[i].second] = i;
        }
        vector<bool> vis(n, false);
        int ans=0;
        for(int i = 0; i < n; i++){
            if(vis[i] || pos[nums[i]] == i) continue;
            int len = 0, j = i;
            while(!vis[j]){
                vis[j] = true;
                j = pos[nums[j]];
                len++;
            }
            ans += len - 1;
        }
        return ans;
    }
};