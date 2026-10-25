class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int>ans(n, -1);
        for(int i=0;i<n;i++){
            int val=nums1[i];
            int j=0;
            while(j < nums2.size() && val!=nums2[j]){
                j++;
            }
            for(j=j+1;j<nums2.size();j++){
                if(val<nums2[j]){
                    ans[i]=nums2[j];
                    break;
                } 
            }
        }
        return ans;
    }
};