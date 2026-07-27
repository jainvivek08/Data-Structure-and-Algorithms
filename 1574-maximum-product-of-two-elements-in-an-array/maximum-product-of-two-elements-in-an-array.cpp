class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(); // TC=O(nlogn)
        // priority_queue<int> pq;
        // for(int i=0;i<n;i++){
        //     pq.push(nums[i]);
        // }
        // int first=pq.top();
        // pq.pop();
        // int second=pq.top();
        // return (first-1)*(second-1);
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};