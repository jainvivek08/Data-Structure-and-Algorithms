class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        int i=0;
        int j=0;
        while(i<n && j<n){
            int max=*max_element(nums.begin(),nums.begin()+j);
            int min=*min_element(nums.begin()+j,nums.end());
            if(max-min<=k) {
                return j;
            }
            else j++;
        }
        return ans;
    }
};