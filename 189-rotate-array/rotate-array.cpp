class Solution {
public:
    // void reverse(int i, int j, vector<int> & nums){
    //     while(i<=j){
    //         int temp=nums[i];
    //         nums[i]=nums[j];
    //         nums[j]=temp;
    //         i++;
    //         j--;
    //     }
    //     return;
    // }
    void rotate(vector<int>& nums, int k) {
        // int n= nums.size();
        if(k>nums.size()) k=k%nums.size();
        // reverse(0,n-1-k);
        // reverse(n-k,n-1);
        // reverse(0,n-1);
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};