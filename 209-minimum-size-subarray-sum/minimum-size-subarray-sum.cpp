class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum=0;
        int result=INT_MAX;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                result=min(result,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(result==INT_MAX) return 0;
        return result;
    }
};