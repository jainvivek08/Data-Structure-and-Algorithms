class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(); //**
        int n=mat[0].size();
        vector<int>ans;
        for(int i=0;i<m+n-1;i++){
            vector<int>temp;
            int row=0;
            int col=0;
            if(i<n){
                row=0;
                col=i;
            }else{
                row=i-n+1;
                col=n-1;
            }
            while(row<m && col>=0){
                temp.push_back(mat[row][col]);
                row++;
                col--;
            }
            if(i%2==0){
                reverse(temp.begin(),temp.end());
            }
            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }
};