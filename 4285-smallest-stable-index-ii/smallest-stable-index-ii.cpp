class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=min(nums[i],suff[i+1]);
        }
        int pref=nums[0];
        for(int i=0;i<n;i++){
            pref=max(pref,nums[i]);
            int instability=pref-suff[i];
            if(instability<=k) return i;
        }
        return -1;
    }
};