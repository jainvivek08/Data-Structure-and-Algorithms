class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m = nums[n/2];
        for(int i=0;i<n;i++){
            ans+=abs(m-nums[i]);
        }
        return ans;
    }
};