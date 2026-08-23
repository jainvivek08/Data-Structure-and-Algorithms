class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=m-1;i>=0;i--){
            int row=i;
            int col=0;
            vector<int>temp;
            while(row<m && col<n){
                temp.push_back(mat[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            row=i;
            col=0;
            int k=0;
            while(row<m && col<n){
                mat[row][col]=temp[k];
                k++;
                row++;
                col++;
            }
        }
        for(int i=1;i<n;i++){
            int row=0;
            int col=i;
            vector<int>temp;
            while(row<m && col<n){
                temp.push_back(mat[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            row=0;
            col=i;
            int k=0;
            while(row<m && col<n){
                mat[row][col]=temp[k];
                k++;
                row++;
                col++;
            }
        }
        return mat;
    }
};