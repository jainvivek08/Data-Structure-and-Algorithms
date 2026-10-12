class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>>pq;
        for (auto &it : mp) {
            pq.push({it.second, it.first});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};