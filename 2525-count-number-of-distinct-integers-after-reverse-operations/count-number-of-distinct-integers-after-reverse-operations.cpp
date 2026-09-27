class Solution {
public:
    int reverseDigit(int nums){
        int rev=0;
        while(nums>0){
            rev*=10;
            rev+=nums%10;
            nums/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>arr(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            arr.push_back(reverseDigit(nums[i]));
        }
        unordered_set<int>s(arr.begin(),arr.end());
        return s.size();
    }
};