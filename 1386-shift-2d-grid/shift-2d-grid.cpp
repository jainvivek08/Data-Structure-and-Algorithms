class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
        }
        int p=v.size();
        k=k%p;
        reverse(v.begin(), v.begin() + (p - k));
        reverse(v.begin() + (p - k),v.end());
        reverse(v.begin(),v.end());
        int index=0;
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=v[index];
                index++;
            }
        }
        return ans;
    }
};