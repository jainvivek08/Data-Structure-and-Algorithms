class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int p=0;
        for(int i=nums[0];i<nums[n-1];i++){
            if(i==nums[p]){
                p++;
                continue;
            }
            else ans.push_back(i);
        }
        return ans;
    }
};