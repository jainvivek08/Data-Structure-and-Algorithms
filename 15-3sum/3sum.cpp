class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
         int n= nums.size();
         for (int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0) {
                    vector<int>p;
                    p.push_back(nums[i]);
                    p.push_back(nums[l]);
                    p.push_back(nums[r]);
                    ans.push_back(p);
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l-1]) l++;
                    while (l < r && nums[r] == nums[r+1]) r--;
                }else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
         }
        return ans;
    }
};