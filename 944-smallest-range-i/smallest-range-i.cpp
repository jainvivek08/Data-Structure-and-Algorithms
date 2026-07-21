class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        // int mx=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>mx) mx=nums[i];
        // }
        // int mn=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<mn) mn=nums[i];
        // }
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int ans = mx-mn-2*k;
        return max(0,ans);
    }
};