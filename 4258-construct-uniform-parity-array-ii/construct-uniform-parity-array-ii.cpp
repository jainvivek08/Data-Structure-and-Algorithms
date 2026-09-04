class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=nums1[0];
        for(int i=0;i<nums1.size();i++){
            mini=min(mini,nums1[i]);
        }
        if(mini%2==1) return true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==1) return false;
        }
        return true;
    }
};