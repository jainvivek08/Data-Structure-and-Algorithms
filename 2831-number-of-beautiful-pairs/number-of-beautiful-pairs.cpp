class Solution {
public:
    int GCD(int a, int b){
        int rem=0;
        while(b!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
    int rev(int x){
        int ans=0;
        while(x!=0){
           ans=ans*10+(x%10);
           x=x/10; 
        }
        return ans;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=rev(nums[i])%10;
                int b=nums[j]%10;
                if(GCD(a,b)==1) count++;
            }
        }
        return count;
    }
};