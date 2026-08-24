class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=n-1;i>=0;i--){
            int row=i;
            int col=0;
            vector<int>temp;
            while(row<n && col<n){
                temp.push_back(grid[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            reverse(temp.begin(),temp.end());
            int k=0;
            row=i;
            col=0;
            while(row<n && col<n){
                grid[row][col]=temp[k];
                row++;
                col++;
                k++;
            }
        }
        for(int i=1;i<n;i++){
            int row=0;
            int col=i;
            vector<int>temp;
            while(row<n && col<n){
                temp.push_back(grid[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            int k=0;
            row=0;
            col=i;
            while(row<n && col<n){
                grid[row][col]=temp[k];
                row++;
                col++;
                k++;
            }
        }
        return grid;
    }
};